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

// Function: entry_00172738
// Address: 0x172738 - 0x1727d0
void entry_00172738_0x172738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172738_0x172738");
#endif

    switch (ctx->pc) {
        case 0x172748u: goto label_172748;
        case 0x172750u: goto label_172750;
        case 0x172758u: goto label_172758;
        case 0x172774u: goto label_172774;
        default: break;
    }

    ctx->pc = 0x172738u;

label_172738:
    // 0x172738: 0x2129821  addu        $s3, $s0, $s2
    ctx->pc = 0x172738u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x17273c: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x17273cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
    // 0x172740: 0xc045b20  jal         func_116C80
    ctx->pc = 0x172740u;
    SET_GPR_U32(ctx, 31, 0x172748u);
    ctx->pc = 0x172744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172740u;
    // 0x172744: 0xae6000a4  sw          $zero, 0xA4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x172740u, 0x172748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172748u;
label_172748:
    // 0x172748: 0xc045b20  jal         func_116C80
    ctx->pc = 0x172748u;
    SET_GPR_U32(ctx, 31, 0x172750u);
    ctx->pc = 0x17274Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172748u;
    // 0x17274c: 0xe6600090  swc1        $f0, 0x90($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x172748u, 0x172750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172750u;
label_172750:
    // 0x172750: 0xc045b20  jal         func_116C80
    ctx->pc = 0x172750u;
    SET_GPR_U32(ctx, 31, 0x172758u);
    ctx->pc = 0x172754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172750u;
    // 0x172754: 0xe6600094  swc1        $f0, 0x94($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x172750u, 0x172758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172758u;
label_172758:
    // 0x172758: 0x26640090  addiu       $a0, $s3, 0x90
    ctx->pc = 0x172758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x17275c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17275cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x172760: 0xe6600098  swc1        $f0, 0x98($s3)
    ctx->pc = 0x172760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 152), bits); }
    // 0x172764: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x172764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172768: 0xae62009c  sw          $v0, 0x9C($s3)
    ctx->pc = 0x172768u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 2));
    // 0x17276c: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x17276Cu;
    SET_GPR_U32(ctx, 31, 0x172774u);
    ctx->pc = 0x172770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17276Cu;
    // 0x172770: 0x2674009c  addiu       $s4, $s3, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x17276Cu, 0x172774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172774u;
label_172774:
    // 0x172774: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x172774u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x172778: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x172778u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x17277c: 0x2a230040  slti        $v1, $s1, 0x40
    ctx->pc = 0x17277cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x172780: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x172780u;
    {
        const bool branch_taken_0x172780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x172784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172780u;
        // 0x172784: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172780) {
            ctx->pc = 0x172738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172738;
        }
    }
    ctx->pc = 0x172788u;
    // 0x172788: 0x260414d0  addiu       $a0, $s0, 0x14D0
    ctx->pc = 0x172788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5328));
    // 0x17278c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x17278cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x172790: 0xae044020  sw          $a0, 0x4020($s0)
    ctx->pc = 0x172790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16416), GPR_U32(ctx, 4));
    // 0x172794: 0xae006014  sw          $zero, 0x6014($s0)
    ctx->pc = 0x172794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24596), GPR_U32(ctx, 0));
    // 0x172798: 0xa2006034  sb          $zero, 0x6034($s0)
    ctx->pc = 0x172798u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24628), (uint8_t)GPR_U32(ctx, 0));
    // 0x17279c: 0xa2006032  sb          $zero, 0x6032($s0)
    ctx->pc = 0x17279cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24626), (uint8_t)GPR_U32(ctx, 0));
    // 0x1727a0: 0xa2006033  sb          $zero, 0x6033($s0)
    ctx->pc = 0x1727a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24627), (uint8_t)GPR_U32(ctx, 0));
    // 0x1727a4: 0xae036018  sw          $v1, 0x6018($s0)
    ctx->pc = 0x1727a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24600), GPR_U32(ctx, 3));
    // 0x1727a8: 0xae00601c  sw          $zero, 0x601C($s0)
    ctx->pc = 0x1727a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24604), GPR_U32(ctx, 0));
    // 0x1727ac: 0xae006020  sw          $zero, 0x6020($s0)
    ctx->pc = 0x1727acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24608), GPR_U32(ctx, 0));
    // 0x1727b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1727b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1727b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1727b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1727b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1727b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1727bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1727bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1727c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1727c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1727c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1727c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1727c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1727C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1727CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1727C8u;
        // 0x1727cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1727C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1727D0u;
}
