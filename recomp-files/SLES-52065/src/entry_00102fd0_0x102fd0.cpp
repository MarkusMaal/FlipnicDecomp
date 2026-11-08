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

// Function: entry_00102fd0
// Address: 0x102fd0 - 0x10304c
void entry_00102fd0_0x102fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102fd0_0x102fd0");
#endif

    switch (ctx->pc) {
        case 0x102ff8u: goto label_102ff8;
        case 0x103034u: goto label_103034;
        default: break;
    }

    ctx->pc = 0x102fd0u;

label_102fd0:
    // 0x102fd0: 0x8682002e  lh          $v0, 0x2E($s4)
    ctx->pc = 0x102fd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 46)));
label_102fd4:
    // 0x102fd4: 0x440001d  bltz        $v0, . + 4 + (0x1D << 2)
label_102fd8:
    if (ctx->pc == 0x102FD8u) {
        ctx->pc = 0x102FDCu;
        goto label_102fdc;
    }
    ctx->pc = 0x102FD4u;
    {
        const bool branch_taken_0x102fd4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x102fd4) {
            ctx->pc = 0x10304Cu;
            return;
        }
    }
    ctx->pc = 0x102FDCu;
label_102fdc:
    // 0x102fdc: 0x86820032  lh          $v0, 0x32($s4)
    ctx->pc = 0x102fdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 50)));
label_102fe0:
    // 0x102fe0: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
label_102fe4:
    if (ctx->pc == 0x102FE4u) {
        ctx->pc = 0x102FE8u;
        goto label_102fe8;
    }
    ctx->pc = 0x102FE0u;
    {
        const bool branch_taken_0x102fe0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x102fe0) {
            ctx->pc = 0x10304Cu;
            return;
        }
    }
    ctx->pc = 0x102FE8u;
label_102fe8:
    // 0x102fe8: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x102fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_102fec:
    // 0x102fec: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x102fecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_102ff0:
    // 0x102ff0: 0xc06cf0c  jal         func_1B3C30
label_102ff4:
    if (ctx->pc == 0x102FF4u) {
        ctx->pc = 0x102FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FF0u;
        // 0x102ff4: 0x24a5e0c8  addiu       $a1, $a1, -0x1F38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102FF8u;
        goto label_102ff8;
    }
    ctx->pc = 0x102FF0u;
    SET_GPR_U32(ctx, 31, 0x102FF8u);
    ctx->pc = 0x102FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102FF0u;
    // 0x102ff4: 0x24a5e0c8  addiu       $a1, $a1, -0x1F38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x102FF0u, 0x102FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102FF8u;
label_102ff8:
    // 0x102ff8: 0x8f838388  lw          $v1, -0x7C78($gp)
    ctx->pc = 0x102ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_102ffc:
    // 0x102ffc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x102ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_103000:
    // 0x103000: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x103000u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_103004:
    // 0x103004: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x103004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_103008:
    // 0x103008: 0x8685002e  lh          $a1, 0x2E($s4)
    ctx->pc = 0x103008u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 46)));
label_10300c:
    // 0x10300c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10300cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_103010:
    // 0x103010: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x103010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_103014:
    // 0x103014: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x103014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_103018:
    // 0x103018: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x103018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_10301c:
    // 0x10301c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10301cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_103020:
    // 0x103020: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x103020u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_103024:
    // 0x103024: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x103024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_103028:
    // 0x103028: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x103028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_10302c:
    // 0x10302c: 0x320f809  jalr        $t9
label_103030:
    if (ctx->pc == 0x103030u) {
        ctx->pc = 0x103030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10302Cu;
        // 0x103030: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103034u;
        goto label_103034;
    }
    ctx->pc = 0x10302Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103034u);
        ctx->pc = 0x103030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10302Cu;
        // 0x103030: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10302Cu, 0x103034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103034u;
label_103034:
    // 0x103034: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x103034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_103038:
    // 0x103038: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x103038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10303c:
    // 0x10303c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10303cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_103040:
    // 0x103040: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x103040u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_103044:
    // 0x103044: 0x320f809  jalr        $t9
label_103048:
    if (ctx->pc == 0x103048u) {
        ctx->pc = 0x103048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103044u;
        // 0x103048: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10304Cu;
        goto label_fallthrough_0x103044;
    }
    ctx->pc = 0x103044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10304Cu);
        ctx->pc = 0x103048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103044u;
        // 0x103048: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103044u, 0x10304Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x103044:
    ctx->pc = 0x10304Cu;
}
