#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00207fbc
// Address: 0x207fbc - 0x207ff0
void entry_00207fbc_0x207fbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207fbc_0x207fbc");
#endif

    ctx->pc = 0x207fbcu;

    // 0x207fbc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x207fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x207fc0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x207fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207fc4: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x207fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x207fc8: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x207fc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x207fcc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x207FCCu;
    {
        const bool branch_taken_0x207fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FCCu;
        // 0x207fd0: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207fcc) {
            ctx->pc = 0x207FF0u;
            return;
        }
    }
    ctx->pc = 0x207FD4u;
    // 0x207fd4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x207fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x207fd8: 0x5207a  dsrl        $a0, $a1, 1
    ctx->pc = 0x207fd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) >> 1);
    // 0x207fdc: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x207fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x207fe0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x207fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x207fe4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x207fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x207fe8: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x207fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x207fec: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x207fecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x207ff0u;
}
