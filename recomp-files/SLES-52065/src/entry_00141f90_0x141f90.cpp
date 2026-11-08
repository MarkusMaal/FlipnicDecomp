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

// Function: entry_00141f90
// Address: 0x141f90 - 0x141fcc
void entry_00141f90_0x141f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141f90_0x141f90");
#endif

    ctx->pc = 0x141f90u;

    // 0x141f90: 0x8ec30034  lw          $v1, 0x34($s6)
    ctx->pc = 0x141f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x141f94: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x141f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x141f98: 0x739021  addu        $s2, $v1, $s3
    ctx->pc = 0x141f98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x141f9c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x141f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x141fa0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x141fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x141fa4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x141fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x141fa8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x141FA8u;
    {
        const bool branch_taken_0x141fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141FA8u;
        // 0x141fac: 0x26310080  addiu       $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141fa8) {
            ctx->pc = 0x141FCCu;
            return;
        }
    }
    ctx->pc = 0x141FB0u;
    // 0x141fb0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x141fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x141fb4: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x141fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x141fb8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x141fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x141fbc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x141fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x141fc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x141fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x141fc4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x141fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x141fc8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x141fc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->pc = 0x141fccu;
}
