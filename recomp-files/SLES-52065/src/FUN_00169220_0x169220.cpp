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

// Function: FUN_00169220
// Address: 0x169220 - 0x169290
void FUN_00169220_0x169220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00169220_0x169220");
#endif

    switch (ctx->pc) {
        case 0x169260u: goto label_169260;
        case 0x169278u: goto label_169278;
        default: break;
    }

    ctx->pc = 0x169220u;

    // 0x169220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x169220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x169224: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x169224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x169228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x169228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16922c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x169230: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x169230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169234: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x169234u;
    {
        const bool branch_taken_0x169234 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x169238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169234u;
        // 0x169238: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169234) {
            ctx->pc = 0x169278u;
            goto label_169278;
        }
    }
    ctx->pc = 0x16923Cu;
    // 0x16923c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x16923cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x169240: 0x2442a370  addiu       $v0, $v0, -0x5C90
    ctx->pc = 0x169240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943600));
    // 0x169244: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x169244u;
    {
        const bool branch_taken_0x169244 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x169248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169244u;
        // 0x169248: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169244) {
            ctx->pc = 0x169260u;
            goto label_169260;
        }
    }
    ctx->pc = 0x16924Cu;
    // 0x16924c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x16924cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x169250: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169254: 0x2442a3d0  addiu       $v0, $v0, -0x5C30
    ctx->pc = 0x169254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943696));
    // 0x169258: 0xc0415fc  jal         func_1057F0
    ctx->pc = 0x169258u;
    SET_GPR_U32(ctx, 31, 0x169260u);
    ctx->pc = 0x16925Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169258u;
    // 0x16925c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057F0u, 0x169258u, 0x169260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169260u;
label_169260:
    // 0x169260: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x169260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x169264: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x169264u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x169268: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x169268u;
    {
        const bool branch_taken_0x169268 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169268u;
        // 0x16926c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169268) {
            ctx->pc = 0x16927Cu;
            goto label_16927c;
        }
    }
    ctx->pc = 0x169270u;
    // 0x169270: 0xc0401a4  jal         func_100690
    ctx->pc = 0x169270u;
    SET_GPR_U32(ctx, 31, 0x169278u);
    ctx->pc = 0x169274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169270u;
    // 0x169274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x169270u, 0x169278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169278u;
label_169278:
    // 0x169278: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x169278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16927c:
    // 0x16927c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16927cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169280: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x169280u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169284: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169288: 0x3e00008  jr          $ra
    ctx->pc = 0x169288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169288u;
        // 0x16928c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169290u;
}
