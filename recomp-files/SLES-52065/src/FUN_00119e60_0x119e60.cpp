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

// Function: FUN_00119e60
// Address: 0x119e60 - 0x119f50
void FUN_00119e60_0x119e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00119e60_0x119e60");
#endif

    switch (ctx->pc) {
        case 0x119e8cu: goto label_119e8c;
        case 0x119ea4u: goto label_119ea4;
        case 0x119edcu: goto label_119edc;
        case 0x119eecu: goto label_119eec;
        case 0x119f04u: goto label_119f04;
        case 0x119f14u: goto label_119f14;
        case 0x119f30u: goto label_119f30;
        case 0x119f40u: goto label_119f40;
        default: break;
    }

    ctx->pc = 0x119e60u;

    // 0x119e60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x119e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x119e64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x119e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x119e68: 0x838283b0  lb          $v0, -0x7C50($gp)
    ctx->pc = 0x119e68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935472)));
    // 0x119e6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119E6Cu;
    {
        const bool branch_taken_0x119e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E6Cu;
        // 0x119e70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e6c) {
            ctx->pc = 0x119E7Cu;
            goto label_119e7c;
        }
    }
    ctx->pc = 0x119E74u;
    // 0x119e74: 0xaf8083ac  sw          $zero, -0x7C54($gp)
    ctx->pc = 0x119e74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935468), GPR_U32(ctx, 0));
    // 0x119e78: 0xa38283b0  sb          $v0, -0x7C50($gp)
    ctx->pc = 0x119e78u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935472), (uint8_t)GPR_U32(ctx, 2));
label_119e7c:
    // 0x119e7c: 0x8f8283ac  lw          $v0, -0x7C54($gp)
    ctx->pc = 0x119e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935468)));
    // 0x119e80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x119e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x119e84: 0xc04b220  jal         func_12C880
    ctx->pc = 0x119E84u;
    SET_GPR_U32(ctx, 31, 0x119E8Cu);
    ctx->pc = 0x119E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119E84u;
    // 0x119e88: 0xaf8283ac  sw          $v0, -0x7C54($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935468), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C880u, 0x119E84u, 0x119E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119E8Cu;
label_119e8c:
    // 0x119e8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e90: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x119e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x119e94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x119e94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x119e98: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x119e98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x119e9c: 0xc04b60c  jal         func_12D830
    ctx->pc = 0x119E9Cu;
    SET_GPR_U32(ctx, 31, 0x119EA4u);
    ctx->pc = 0x119EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119E9Cu;
    // 0x119ea0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D830u, 0x119E9Cu, 0x119EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119EA4u;
label_119ea4:
    // 0x119ea4: 0x8f8283ac  lw          $v0, -0x7C54($gp)
    ctx->pc = 0x119ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935468)));
    // 0x119ea8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119EA8u;
    {
        const bool branch_taken_0x119ea8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x119EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119EA8u;
        // 0x119eac: 0x21943  sra         $v1, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ea8) {
            ctx->pc = 0x119EB8u;
            goto label_119eb8;
        }
    }
    ctx->pc = 0x119EB0u;
    // 0x119eb0: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x119eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x119eb4: 0x21943  sra         $v1, $v0, 5
    ctx->pc = 0x119eb4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
label_119eb8:
    // 0x119eb8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x119eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x119ebc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x119ebcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x119ec0: 0x0  nop
    ctx->pc = 0x119ec0u;
    // NOP
    // 0x119ec4: 0x0  nop
    ctx->pc = 0x119ec4u;
    // NOP
    // 0x119ec8: 0x1810  mfhi        $v1
    ctx->pc = 0x119ec8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x119ecc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x119ECCu;
    {
        const bool branch_taken_0x119ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x119ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119ECCu;
        // 0x119ed0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ecc) {
            ctx->pc = 0x119EF4u;
            goto label_119ef4;
        }
    }
    ctx->pc = 0x119ED4u;
    // 0x119ed4: 0xc04b220  jal         func_12C880
    ctx->pc = 0x119ED4u;
    SET_GPR_U32(ctx, 31, 0x119EDCu);
    ctx->pc = 0x12C880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C880u, 0x119ED4u, 0x119EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119EDCu;
label_119edc:
    // 0x119edc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x119edcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x119ee0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ee4: 0xc04b3ac  jal         func_12CEB0
    ctx->pc = 0x119EE4u;
    SET_GPR_U32(ctx, 31, 0x119EECu);
    ctx->pc = 0x119EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119EE4u;
    // 0x119ee8: 0x24a5e608  addiu       $a1, $a1, -0x19F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CEB0u, 0x119EE4u, 0x119EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119EECu;
label_119eec:
    // 0x119eec: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x119EECu;
    {
        const bool branch_taken_0x119eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119EECu;
        // 0x119ef0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119eec) {
            ctx->pc = 0x119F44u;
            goto label_119f44;
        }
    }
    ctx->pc = 0x119EF4u;
label_119ef4:
    // 0x119ef4: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x119EF4u;
    {
        const bool branch_taken_0x119ef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x119ef4) {
            ctx->pc = 0x119F1Cu;
            goto label_119f1c;
        }
    }
    ctx->pc = 0x119EFCu;
    // 0x119efc: 0xc04b220  jal         func_12C880
    ctx->pc = 0x119EFCu;
    SET_GPR_U32(ctx, 31, 0x119F04u);
    ctx->pc = 0x12C880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C880u, 0x119EFCu, 0x119F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F04u;
label_119f04:
    // 0x119f04: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x119f04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x119f08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f0c: 0xc04b3ac  jal         func_12CEB0
    ctx->pc = 0x119F0Cu;
    SET_GPR_U32(ctx, 31, 0x119F14u);
    ctx->pc = 0x119F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119F0Cu;
    // 0x119f10: 0x24a5e610  addiu       $a1, $a1, -0x19F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CEB0u, 0x119F0Cu, 0x119F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F14u;
label_119f14:
    // 0x119f14: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x119F14u;
    {
        const bool branch_taken_0x119f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x119f14) {
            ctx->pc = 0x119F40u;
            goto label_119f40;
        }
    }
    ctx->pc = 0x119F1Cu;
label_119f1c:
    // 0x119f1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x119f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x119f20: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x119F20u;
    {
        const bool branch_taken_0x119f20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x119f20) {
            ctx->pc = 0x119F40u;
            goto label_119f40;
        }
    }
    ctx->pc = 0x119F28u;
    // 0x119f28: 0xc04b220  jal         func_12C880
    ctx->pc = 0x119F28u;
    SET_GPR_U32(ctx, 31, 0x119F30u);
    ctx->pc = 0x12C880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C880u, 0x119F28u, 0x119F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F30u;
label_119f30:
    // 0x119f30: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x119f30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x119f34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f38: 0xc04b3ac  jal         func_12CEB0
    ctx->pc = 0x119F38u;
    SET_GPR_U32(ctx, 31, 0x119F40u);
    ctx->pc = 0x119F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119F38u;
    // 0x119f3c: 0x24a5e618  addiu       $a1, $a1, -0x19E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CEB0u, 0x119F38u, 0x119F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F40u;
label_119f40:
    // 0x119f40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x119f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_119f44:
    // 0x119f44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x119f44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f48: 0x3e00008  jr          $ra
    ctx->pc = 0x119F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F48u;
        // 0x119f4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119F50u;
}
