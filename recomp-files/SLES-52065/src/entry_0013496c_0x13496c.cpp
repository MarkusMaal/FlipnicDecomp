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

// Function: entry_0013496c
// Address: 0x13496c - 0x1349b0
void entry_0013496c_0x13496c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013496c_0x13496c");
#endif

    switch (ctx->pc) {
        case 0x1349a8u: goto label_1349a8;
        default: break;
    }

    ctx->pc = 0x13496cu;

label_13496c:
    // 0x13496c: 0x8fa203ec  lw          $v0, 0x3EC($sp)
    ctx->pc = 0x13496cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1004)));
label_134970:
    // 0x134970: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_134974:
    if (ctx->pc == 0x134974u) {
        ctx->pc = 0x134978u;
        goto label_134978;
    }
    ctx->pc = 0x134970u;
    {
        const bool branch_taken_0x134970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134970) {
            ctx->pc = 0x134A58u;
            return;
        }
    }
    ctx->pc = 0x134978u;
label_134978:
    // 0x134978: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x134978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
label_13497c:
    // 0x13497c: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x13497cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_134980:
    // 0x134980: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x134980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_134984:
    // 0x134984: 0x26420054  addiu       $v0, $s2, 0x54
    ctx->pc = 0x134984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
label_134988:
    // 0x134988: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x134988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_13498c:
    // 0x13498c: 0x8e440080  lw          $a0, 0x80($s2)
    ctx->pc = 0x13498cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_134990:
    // 0x134990: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_134994:
    if (ctx->pc == 0x134994u) {
        ctx->pc = 0x134998u;
        goto label_134998;
    }
    ctx->pc = 0x134990u;
    {
        const bool branch_taken_0x134990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x134990) {
            ctx->pc = 0x1349B0u;
            return;
        }
    }
    ctx->pc = 0x134998u;
label_134998:
    // 0x134998: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x134998u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13499c:
    // 0x13499c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x13499cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1349a0:
    // 0x1349a0: 0x320f809  jalr        $t9
label_1349a4:
    if (ctx->pc == 0x1349A4u) {
        ctx->pc = 0x1349A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1349A0u;
        // 0x1349a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1349A8u;
        goto label_1349a8;
    }
    ctx->pc = 0x1349A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1349A8u);
        ctx->pc = 0x1349A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1349A0u;
        // 0x1349a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1349A0u, 0x1349A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1349A8u;
label_1349a8:
    // 0x1349a8: 0x10000026  b           . + 4 + (0x26 << 2)
label_1349ac:
    if (ctx->pc == 0x1349ACu) {
        ctx->pc = 0x1349ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1349A8u;
        // 0x1349ac: 0x92420092  lbu         $v0, 0x92($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1349B0u;
        goto label_fallthrough_0x1349a8;
    }
    ctx->pc = 0x1349A8u;
    {
        const bool branch_taken_0x1349a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1349ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1349A8u;
        // 0x1349ac: 0x92420092  lbu         $v0, 0x92($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 146)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1349a8) {
            ctx->pc = 0x134A44u;
            return;
        }
    }
label_fallthrough_0x1349a8:
    ctx->pc = 0x1349B0u;
}
