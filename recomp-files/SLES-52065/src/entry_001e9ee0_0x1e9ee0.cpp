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

// Function: entry_001e9ee0
// Address: 0x1e9ee0 - 0x1e9f18
void entry_001e9ee0_0x1e9ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9ee0_0x1e9ee0");
#endif

    ctx->pc = 0x1e9ee0u;

label_1e9ee0:
    // 0x1e9ee0: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x1e9ee0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e9ee4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1e9ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1e9ee8: 0x79020010  lq          $v0, 0x10($t0)
    ctx->pc = 0x1e9ee8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1e9eec: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x1e9eecu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x1e9ef0: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x1e9ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x1e9ef4: 0x7ce20010  sq          $v0, 0x10($a3)
    ctx->pc = 0x1e9ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
    // 0x1e9ef8: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E9EF8u;
    {
        const bool branch_taken_0x1e9ef8 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x1E9EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9EF8u;
        // 0x1e9efc: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9ef8) {
            ctx->pc = 0x1E9EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9ee0;
        }
    }
    ctx->pc = 0x1E9F00u;
    // 0x1e9f00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e9f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e9f04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9F04u;
    {
        const bool branch_taken_0x1e9f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9f04) {
            ctx->pc = 0x1E9F18u;
            return;
        }
    }
    ctx->pc = 0x1E9F0Cu;
    // 0x1e9f0c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1e9f0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9f10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E9F10u;
    {
        const bool branch_taken_0x1e9f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9F10u;
        // 0x1e9f14: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9f10) {
            ctx->pc = 0x1E9F1Cu;
            return;
        }
    }
    ctx->pc = 0x1E9F18u;
}
