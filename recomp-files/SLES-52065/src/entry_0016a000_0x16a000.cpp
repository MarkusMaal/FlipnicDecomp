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

// Function: entry_0016a000
// Address: 0x16a000 - 0x16a040
void entry_0016a000_0x16a000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a000_0x16a000");
#endif

    switch (ctx->pc) {
        case 0x16a014u: goto label_16a014;
        case 0x16a028u: goto label_16a028;
        default: break;
    }

    ctx->pc = 0x16a000u;

label_16a000:
    // 0x16a000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a004:
    // 0x16a004: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16a004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16a008:
    // 0x16a008: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16a008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16a00c:
    // 0x16a00c: 0xc0425a4  jal         func_109690
label_16a010:
    if (ctx->pc == 0x16A010u) {
        ctx->pc = 0x16A010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A00Cu;
        // 0x16a010: 0xae000224  sw          $zero, 0x224($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A014u;
        goto label_16a014;
    }
    ctx->pc = 0x16A00Cu;
    SET_GPR_U32(ctx, 31, 0x16A014u);
    ctx->pc = 0x16A010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A00Cu;
    // 0x16a010: 0xae000224  sw          $zero, 0x224($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x16A00Cu, 0x16A014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A014u;
label_16a014:
    // 0x16a014: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x16a014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_16a018:
    // 0x16a018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a01c:
    // 0x16a01c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16a01cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16a020:
    // 0x16a020: 0x320f809  jalr        $t9
label_16a024:
    if (ctx->pc == 0x16A024u) {
        ctx->pc = 0x16A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A020u;
        // 0x16a024: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A028u;
        goto label_16a028;
    }
    ctx->pc = 0x16A020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16A028u);
        ctx->pc = 0x16A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A020u;
        // 0x16a024: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A020u, 0x16A028u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A028u;
label_16a028:
    // 0x16a028: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16a028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16a02c:
    // 0x16a02c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16a02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16a030:
    // 0x16a030: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16a030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16a034:
    // 0x16a034: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16a034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16a038:
    // 0x16a038: 0x3e00008  jr          $ra
label_16a03c:
    if (ctx->pc == 0x16A03Cu) {
        ctx->pc = 0x16A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A038u;
        // 0x16a03c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A040u;
        goto label_fallthrough_0x16a038;
    }
    ctx->pc = 0x16A038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A038u;
        // 0x16a03c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16a038:
    ctx->pc = 0x16A040u;
}
