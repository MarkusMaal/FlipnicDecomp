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

// Function: entry_00203060
// Address: 0x203060 - 0x2030b0
void entry_00203060_0x203060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203060_0x203060");
#endif

    switch (ctx->pc) {
        case 0x203070u: goto label_203070;
        case 0x203088u: goto label_203088;
        default: break;
    }

    ctx->pc = 0x203060u;

    // 0x203060: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x203060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x203064: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x203064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203068: 0xc080112  jal         func_200448
    ctx->pc = 0x203068u;
    SET_GPR_U32(ctx, 31, 0x203070u);
    ctx->pc = 0x20306Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203068u;
    // 0x20306c: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200448u, 0x203068u, 0x203070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203070u;
label_203070:
    // 0x203070: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x203070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x203074: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x203074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x203078: 0x8c54000c  lw          $s4, 0xC($v0)
    ctx->pc = 0x203078u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x20307c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20307cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203080: 0xc0800f8  jal         func_2003E0
    ctx->pc = 0x203080u;
    SET_GPR_U32(ctx, 31, 0x203088u);
    ctx->pc = 0x203084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203080u;
    // 0x203084: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2003E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2003E0u, 0x203080u, 0x203088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203088u;
label_203088:
    // 0x203088: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x203088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20308c: 0x4e1fe95  bgez        $a3, . + 4 + (-0x16B << 2)
    ctx->pc = 0x20308Cu;
    {
        const bool branch_taken_0x20308c = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x20308c) {
            ctx->pc = 0x202AE4u;
            return;
        }
    }
    ctx->pc = 0x203094u;
    // 0x203094: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x203094u;
    {
        const bool branch_taken_0x203094 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x203098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203094u;
        // 0x203098: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203094) {
            ctx->pc = 0x2030B4u;
            return;
        }
    }
    ctx->pc = 0x20309Cu;
    // 0x20309c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20309cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2030a0: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x2030a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x2030a4: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x2030a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x2030a8: 0x1040fe83  beqz        $v0, . + 4 + (-0x17D << 2)
    ctx->pc = 0x2030A8u;
    {
        const bool branch_taken_0x2030a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2030ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030A8u;
        // 0x2030ac: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2030a8) {
            ctx->pc = 0x202AB8u;
            return;
        }
    }
    ctx->pc = 0x2030B0u;
}
