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

// Function: entry_001e999c
// Address: 0x1e999c - 0x1e99d4
void entry_001e999c_0x1e999c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e999c_0x1e999c");
#endif

    ctx->pc = 0x1e999cu;

label_1e999c:
    // 0x1e999c: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x1e999cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e99a0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1e99a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1e99a4: 0x79020010  lq          $v0, 0x10($t0)
    ctx->pc = 0x1e99a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1e99a8: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x1e99a8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x1e99ac: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x1e99acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x1e99b0: 0x7ce20010  sq          $v0, 0x10($a3)
    ctx->pc = 0x1e99b0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
    // 0x1e99b4: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E99B4u;
    {
        const bool branch_taken_0x1e99b4 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x1E99B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99B4u;
        // 0x1e99b8: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e99b4) {
            ctx->pc = 0x1E999Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e999c;
        }
    }
    ctx->pc = 0x1E99BCu;
    // 0x1e99bc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e99bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e99c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E99C0u;
    {
        const bool branch_taken_0x1e99c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e99c0) {
            ctx->pc = 0x1E99D4u;
            return;
        }
    }
    ctx->pc = 0x1E99C8u;
    // 0x1e99c8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1e99c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e99cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E99CCu;
    {
        const bool branch_taken_0x1e99cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E99D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99CCu;
        // 0x1e99d0: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e99cc) {
            ctx->pc = 0x1E99D8u;
            return;
        }
    }
    ctx->pc = 0x1E99D4u;
}
