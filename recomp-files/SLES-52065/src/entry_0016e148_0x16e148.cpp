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

// Function: entry_0016e148
// Address: 0x16e148 - 0x16e198
void entry_0016e148_0x16e148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e148_0x16e148");
#endif

    switch (ctx->pc) {
        case 0x16e164u: goto label_16e164;
        case 0x16e180u: goto label_16e180;
        default: break;
    }

    ctx->pc = 0x16e148u;

    // 0x16e148: 0xa6020214  sh          $v0, 0x214($s0)
    ctx->pc = 0x16e148u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 532), (uint16_t)GPR_U32(ctx, 2));
    // 0x16e14c: 0x86110214  lh          $s1, 0x214($s0)
    ctx->pc = 0x16e14cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x16e150: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x16e150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x16e154: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x16e154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x16e158: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x16e158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16e15c: 0xc040168  jal         func_1005A0
    ctx->pc = 0x16E15Cu;
    SET_GPR_U32(ctx, 31, 0x16E164u);
    ctx->pc = 0x16E160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E15Cu;
    // 0x16e160: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x16E15Cu, 0x16E164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E164u;
label_16e164:
    // 0x16e164: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x16e164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x16e168: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x16e168u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e16c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16e16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e170: 0x24a5e1a0  addiu       $a1, $a1, -0x1E60
    ctx->pc = 0x16e170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959520));
    // 0x16e174: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16e174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e178: 0xc07a424  jal         func_1E9090
    ctx->pc = 0x16E178u;
    SET_GPR_U32(ctx, 31, 0x16E180u);
    ctx->pc = 0x16E17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E178u;
    // 0x16e17c: 0x24070090  addiu       $a3, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9090u, 0x16E178u, 0x16E180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E180u;
label_16e180:
    // 0x16e180: 0xae020210  sw          $v0, 0x210($s0)
    ctx->pc = 0x16e180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 2));
    // 0x16e184: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16e184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e188: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16e188u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e18c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16e18cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e190: 0x3e00008  jr          $ra
    ctx->pc = 0x16E190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E190u;
        // 0x16e194: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E198u;
}
