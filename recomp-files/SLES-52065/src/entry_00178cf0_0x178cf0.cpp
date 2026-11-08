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

// Function: entry_00178cf0
// Address: 0x178cf0 - 0x178d20
void entry_00178cf0_0x178cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178cf0_0x178cf0");
#endif

    ctx->pc = 0x178cf0u;

    // 0x178cf0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x178cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x178cf4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x178cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x178cf8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x178cf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x178cfc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x178cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x178d00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x178d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178d04: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x178d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x178d08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x178d08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x178d0c: 0x2e220040  sltiu       $v0, $s1, 0x40
    ctx->pc = 0x178d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x178d10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178d14: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x178D14u;
    {
        const bool branch_taken_0x178d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D14u;
        // 0x178d18: 0xac650040  sw          $a1, 0x40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d14) {
            ctx->pc = 0x178D20u;
            return;
        }
    }
    ctx->pc = 0x178D1Cu;
    // 0x178d1c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x178d1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x178d20u;
}
