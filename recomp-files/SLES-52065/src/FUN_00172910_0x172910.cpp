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

// Function: FUN_00172910
// Address: 0x172910 - 0x1729ac
void FUN_00172910_0x172910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00172910_0x172910");
#endif

    switch (ctx->pc) {
        case 0x172940u: goto label_172940;
        case 0x17294cu: goto label_17294c;
        case 0x172954u: goto label_172954;
        case 0x17295cu: goto label_17295c;
        case 0x172974u: goto label_172974;
        default: break;
    }

    ctx->pc = 0x172910u;

    // 0x172910: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x172910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x172914: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x172914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x172918: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x172918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17291c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17291cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x172920: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x172920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x172924: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x172924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172928: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x172928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17292c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17292cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172930: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x172930u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x172934: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x172934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172938: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x172938u;
    {
        const bool branch_taken_0x172938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172938u;
        // 0x17293c: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172938) {
            ctx->pc = 0x172980u;
            goto label_172980;
        }
    }
    ctx->pc = 0x172940u;
label_172940:
    // 0x172940: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x172940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x172944: 0xc045b20  jal         func_116C80
    ctx->pc = 0x172944u;
    SET_GPR_U32(ctx, 31, 0x17294Cu);
    ctx->pc = 0x172948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172944u;
    // 0x172948: 0x509821  addu        $s3, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x172944u, 0x17294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17294Cu;
label_17294c:
    // 0x17294c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x17294Cu;
    SET_GPR_U32(ctx, 31, 0x172954u);
    ctx->pc = 0x172950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17294Cu;
    // 0x172950: 0xe6600030  swc1        $f0, 0x30($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x17294Cu, 0x172954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172954u;
label_172954:
    // 0x172954: 0xc045b20  jal         func_116C80
    ctx->pc = 0x172954u;
    SET_GPR_U32(ctx, 31, 0x17295Cu);
    ctx->pc = 0x172958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172954u;
    // 0x172958: 0xe6600034  swc1        $f0, 0x34($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x172954u, 0x17295Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17295Cu;
label_17295c:
    // 0x17295c: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x17295cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x172960: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x172960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x172964: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x172964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x172968: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x172968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17296c: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x17296Cu;
    SET_GPR_U32(ctx, 31, 0x172974u);
    ctx->pc = 0x172970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17296Cu;
    // 0x172970: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x17296Cu, 0x172974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172974u;
label_172974:
    // 0x172974: 0xae60003c  sw          $zero, 0x3C($s3)
    ctx->pc = 0x172974u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
    // 0x172978: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x172978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x17297c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17297cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_172980:
    // 0x172980: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x172980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x172984: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x172984u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x172988: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x172988u;
    {
        const bool branch_taken_0x172988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x172988) {
            ctx->pc = 0x172940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172940;
        }
    }
    ctx->pc = 0x172990u;
    // 0x172990: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x172990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172994: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x172994u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172998: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x172998u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17299c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17299cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1729a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1729a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1729a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1729A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1729A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729A4u;
        // 0x1729a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1729A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1729ACu;
}
