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

// Function: entry_0018aad4
// Address: 0x18aad4 - 0x18ab24
void entry_0018aad4_0x18aad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018aad4_0x18aad4");
#endif

    switch (ctx->pc) {
        case 0x18aadcu: goto label_18aadc;
        case 0x18aaf8u: goto label_18aaf8;
        case 0x18ab0cu: goto label_18ab0c;
        default: break;
    }

    ctx->pc = 0x18aad4u;

label_18aad4:
    // 0x18aad4: 0xc07ae70  jal         func_1EB9C0
    ctx->pc = 0x18AAD4u;
    SET_GPR_U32(ctx, 31, 0x18AADCu);
    ctx->pc = 0x18AAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AAD4u;
    // 0x18aad8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB9C0u, 0x18AAD4u, 0x18AADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AADCu;
label_18aadc:
    // 0x18aadc: 0x0  nop
    ctx->pc = 0x18aadcu;
    // NOP
    // 0x18aae0: 0x0  nop
    ctx->pc = 0x18aae0u;
    // NOP
    // 0x18aae4: 0x0  nop
    ctx->pc = 0x18aae4u;
    // NOP
    // 0x18aae8: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18AAE8u;
    {
        const bool branch_taken_0x18aae8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18aae8) {
            ctx->pc = 0x18AAD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18aad4;
        }
    }
    ctx->pc = 0x18AAF0u;
    // 0x18aaf0: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x18AAF0u;
    SET_GPR_U32(ctx, 31, 0x18AAF8u);
    ctx->pc = 0x18AAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AAF0u;
    // 0x18aaf4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x18AAF0u, 0x18AAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AAF8u;
label_18aaf8:
    // 0x18aaf8: 0x2351021  addu        $v0, $s1, $s5
    ctx->pc = 0x18aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x18aafc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18aafcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ab00: 0x8c450880  lw          $a1, 0x880($v0)
    ctx->pc = 0x18ab00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2176)));
    // 0x18ab04: 0xc074c70  jal         func_1D31C0
    ctx->pc = 0x18AB04u;
    SET_GPR_U32(ctx, 31, 0x18AB0Cu);
    ctx->pc = 0x18AB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AB04u;
    // 0x18ab08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D31C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D31C0u, 0x18AB04u, 0x18AB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AB0Cu;
label_18ab0c:
    // 0x18ab0c: 0xaea208c0  sw          $v0, 0x8C0($s5)
    ctx->pc = 0x18ab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2240), GPR_U32(ctx, 2));
    // 0x18ab10: 0xaeb408c4  sw          $s4, 0x8C4($s5)
    ctx->pc = 0x18ab10u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2244), GPR_U32(ctx, 20));
    // 0x18ab14: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AB14u;
    {
        const bool branch_taken_0x18ab14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB14u;
        // 0x18ab18: 0xaeb308c8  sw          $s3, 0x8C8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 2248), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ab14) {
            ctx->pc = 0x18AB24u;
            return;
        }
    }
    ctx->pc = 0x18AB1Cu;
    // 0x18ab1c: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x18AB1Cu;
    SET_GPR_U32(ctx, 31, 0x18AB24u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x18AB1Cu, 0x18AB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AB24u;
}
