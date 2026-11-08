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

// Function: FUN_001eccc0
// Address: 0x1eccc0 - 0x1ecd7c
void FUN_001eccc0_0x1eccc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001eccc0_0x1eccc0");
#endif

    switch (ctx->pc) {
        case 0x1eccdcu: goto label_1eccdc;
        case 0x1eccf4u: goto label_1eccf4;
        case 0x1ecd60u: goto label_1ecd60;
        default: break;
    }

    ctx->pc = 0x1eccc0u;

    // 0x1eccc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eccc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eccc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1eccc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eccc8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1eccc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ecccc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eccccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1eccd0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1eccd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1eccd4: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x1ECCD4u;
    SET_GPR_U32(ctx, 31, 0x1ECCDCu);
    ctx->pc = 0x1ECCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECCD4u;
    // 0x1eccd8: 0x3c100039  lui         $s0, 0x39 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x1ECCD4u, 0x1ECCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECCDCu;
label_1eccdc:
    // 0x1eccdc: 0x2611c3d0  addiu       $s1, $s0, -0x3C30
    ctx->pc = 0x1eccdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951888));
    // 0x1ecce0: 0x3c06001f  lui         $a2, 0x1F
    ctx->pc = 0x1ecce0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)31 << 16));
    // 0x1ecce4: 0x24040210  addiu       $a0, $zero, 0x210
    ctx->pc = 0x1ecce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x1ecce8: 0x24c6c908  addiu       $a2, $a2, -0x36F8
    ctx->pc = 0x1ecce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953224));
    // 0x1eccec: 0xc07b1a0  jal         func_1EC680
    ctx->pc = 0x1ECCECu;
    SET_GPR_U32(ctx, 31, 0x1ECCF4u);
    ctx->pc = 0x1ECCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECCECu;
    // 0x1eccf0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC680u, 0x1ECCECu, 0x1ECCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECCF4u;
label_1eccf4:
    // 0x1eccf4: 0xae02c3d0  sw          $v0, -0x3C30($s0)
    ctx->pc = 0x1eccf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294951888), GPR_U32(ctx, 2));
    // 0x1eccf8: 0x8e02c3d0  lw          $v0, -0x3C30($s0)
    ctx->pc = 0x1eccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951888)));
    // 0x1eccfc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ECCFCu;
    {
        const bool branch_taken_0x1eccfc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1ECD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECCFCu;
        // 0x1ecd00: 0x3c040039  lui         $a0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eccfc) {
            ctx->pc = 0x1ECD0Cu;
            goto label_1ecd0c;
        }
    }
    ctx->pc = 0x1ECD04u;
    // 0x1ecd04: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1ECD04u;
    {
        const bool branch_taken_0x1ecd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECD04u;
        // 0x1ecd08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecd04) {
            ctx->pc = 0x1ECD68u;
            goto label_1ecd68;
        }
    }
    ctx->pc = 0x1ECD0Cu;
label_1ecd0c:
    // 0x1ecd0c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ecd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1ecd10: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1ecd10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1ecd14: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ecd14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ecd18: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x1ecd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x1ecd1c: 0x2442c400  addiu       $v0, $v0, -0x3C00
    ctx->pc = 0x1ecd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951936));
    // 0x1ecd20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ecd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ecd24: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1ecd24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1ecd28: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ecd28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ecd2c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1ecd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1ecd30: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x1ecd30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
    // 0x1ecd34: 0x24060210  addiu       $a2, $zero, 0x210
    ctx->pc = 0x1ecd34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x1ecd38: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1ecd38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1ecd3c: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x1ecd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1ecd40: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x1ecd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1ecd44: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x1ecd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ecd48: 0xa4460004  sh          $a2, 0x4($v0)
    ctx->pc = 0x1ecd48u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x2038C404u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x2038C404u, _value); } while (0);
    // 0x1ecd4c: 0xa0450006  sb          $a1, 0x6($v0)
    ctx->pc = 0x1ecd4cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x2038C406u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x2038C406u, _value); } while (0);
    // 0x1ecd50: 0xa0430007  sb          $v1, 0x7($v0)
    ctx->pc = 0x1ecd50u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2038C407u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x2038C407u, _value); } while (0);
    // 0x1ecd54: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1ecd54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x2038C408u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2038C408u, _value); } while (0);
    // 0x1ecd58: 0xc07b218  jal         func_1EC860
    ctx->pc = 0x1ECD58u;
    SET_GPR_U32(ctx, 31, 0x1ECD60u);
    ctx->pc = 0x1ECD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECD58u;
    // 0x1ecd5c: 0xa4400002  sh          $zero, 0x2($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC860u, 0x1ECD58u, 0x1ECD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECD60u;
label_1ecd60:
    // 0x1ecd60: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1ecd60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x1ecd64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ecd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ecd68:
    // 0x1ecd68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ecd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ecd6c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ecd6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ecd70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ecd70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ecd74: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECD74u;
        // 0x1ecd78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECD74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECD7Cu;
}
