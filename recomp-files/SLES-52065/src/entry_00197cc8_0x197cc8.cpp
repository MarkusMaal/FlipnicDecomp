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

// Function: entry_00197cc8
// Address: 0x197cc8 - 0x197d30
void entry_00197cc8_0x197cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197cc8_0x197cc8");
#endif

    switch (ctx->pc) {
        case 0x197d28u: goto label_197d28;
        default: break;
    }

    ctx->pc = 0x197cc8u;

    // 0x197cc8: 0x29610005  slti        $at, $t3, 0x5
    ctx->pc = 0x197cc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x197ccc: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x197CCCu;
    {
        const bool branch_taken_0x197ccc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x197ccc) {
            ctx->pc = 0x197D30u;
            return;
        }
    }
    ctx->pc = 0x197CD4u;
    // 0x197cd4: 0xb3080  sll         $a2, $t3, 2
    ctx->pc = 0x197cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x197cd8: 0x1463021  addu        $a2, $t2, $a2
    ctx->pc = 0x197cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x197cdc: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x197cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x197ce0: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x197CE0u;
    {
        const bool branch_taken_0x197ce0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x197ce0) {
            ctx->pc = 0x197D30u;
            return;
        }
    }
    ctx->pc = 0x197CE8u;
    // 0x197ce8: 0x8ea306a8  lw          $v1, 0x6A8($s5)
    ctx->pc = 0x197ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1704)));
    // 0x197cec: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x197CECu;
    {
        const bool branch_taken_0x197cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x197cec) {
            ctx->pc = 0x197D44u;
            return;
        }
    }
    ctx->pc = 0x197CF4u;
    // 0x197cf4: 0xb51021  addu        $v0, $a1, $s5
    ctx->pc = 0x197cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x197cf8: 0x24862cd8  addiu       $a2, $a0, 0x2CD8
    ctx->pc = 0x197cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 11480));
    // 0x197cfc: 0x8c4306b0  lw          $v1, 0x6B0($v0)
    ctx->pc = 0x197cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1712)));
    // 0x197d00: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x197d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x197d04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x197d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x197d08: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x197d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x197d0c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x197d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x197d10: 0x8c4206b0  lw          $v0, 0x6B0($v0)
    ctx->pc = 0x197d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1712)));
    // 0x197d14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x197d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x197d18: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x197d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x197d1c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x197d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x197d20: 0xc05a1c8  jal         func_168720
    ctx->pc = 0x197D20u;
    SET_GPR_U32(ctx, 31, 0x197D28u);
    ctx->pc = 0x197D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197D20u;
    // 0x197d24: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168720u, 0x197D20u, 0x197D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D28u;
label_197d28:
    // 0x197d28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x197D28u;
    {
        const bool branch_taken_0x197d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D28u;
        // 0x197d2c: 0xaeb006ac  sw          $s0, 0x6AC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1708), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d28) {
            ctx->pc = 0x197D44u;
            return;
        }
    }
    ctx->pc = 0x197D30u;
}
