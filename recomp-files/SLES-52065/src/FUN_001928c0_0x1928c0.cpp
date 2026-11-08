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

// Function: FUN_001928c0
// Address: 0x1928c0 - 0x192984
void FUN_001928c0_0x1928c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001928c0_0x1928c0");
#endif

    switch (ctx->pc) {
        case 0x1928e8u: goto label_1928e8;
        case 0x1928f4u: goto label_1928f4;
        case 0x19292cu: goto label_19292c;
        case 0x192940u: goto label_192940;
        default: break;
    }

    ctx->pc = 0x1928c0u;

    // 0x1928c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1928c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1928c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1928c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1928c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1928c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1928cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1928ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1928d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1928d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1928d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1928d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1928d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1928d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1928dc: 0x7fa00050  sq          $zero, 0x50($sp)
    ctx->pc = 0x1928dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 0));
    // 0x1928e0: 0xc063f7c  jal         func_18FDF0
    ctx->pc = 0x1928E0u;
    SET_GPR_U32(ctx, 31, 0x1928E8u);
    ctx->pc = 0x1928E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1928E0u;
    // 0x1928e4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x1928E0u, 0x1928E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1928E8u;
label_1928e8:
    // 0x1928e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1928e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1928ec: 0xc0648ec  jal         func_1923B0
    ctx->pc = 0x1928ECu;
    SET_GPR_U32(ctx, 31, 0x1928F4u);
    ctx->pc = 0x1928F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1928ECu;
    // 0x1928f0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1923B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1923B0u, 0x1928ECu, 0x1928F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1928F4u;
label_1928f4:
    // 0x1928f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1928f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1928f8: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1928F8u;
    {
        const bool branch_taken_0x1928f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1928f8) {
            ctx->pc = 0x192964u;
            goto label_192964;
        }
    }
    ctx->pc = 0x192900u;
    // 0x192900: 0x8e220668  lw          $v0, 0x668($s1)
    ctx->pc = 0x192900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1640)));
    // 0x192904: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x192904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192908: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x192908u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19290c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19290cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192910: 0xae220664  sw          $v0, 0x664($s1)
    ctx->pc = 0x192910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1636), GPR_U32(ctx, 2));
    // 0x192914: 0x8e220324  lw          $v0, 0x324($s1)
    ctx->pc = 0x192914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x192918: 0xae220330  sw          $v0, 0x330($s1)
    ctx->pc = 0x192918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 816), GPR_U32(ctx, 2));
    // 0x19291c: 0xae200324  sw          $zero, 0x324($s1)
    ctx->pc = 0x19291cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 804), GPR_U32(ctx, 0));
    // 0x192920: 0xae20033c  sw          $zero, 0x33C($s1)
    ctx->pc = 0x192920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 828), GPR_U32(ctx, 0));
    // 0x192924: 0xae200340  sw          $zero, 0x340($s1)
    ctx->pc = 0x192924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 832), GPR_U32(ctx, 0));
    // 0x192928: 0xae200344  sw          $zero, 0x344($s1)
    ctx->pc = 0x192928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 836), GPR_U32(ctx, 0));
label_19292c:
    // 0x19292c: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x19292cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x192930: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x192930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x192934: 0x24a5fe10  addiu       $a1, $a1, -0x1F0
    ctx->pc = 0x192934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966800));
    // 0x192938: 0xc063f7c  jal         func_18FDF0
    ctx->pc = 0x192938u;
    SET_GPR_U32(ctx, 31, 0x192940u);
    ctx->pc = 0x19293Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192938u;
    // 0x19293c: 0x24440350  addiu       $a0, $v0, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x192938u, 0x192940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192940u;
label_192940:
    // 0x192940: 0x2331821  addu        $v1, $s1, $s3
    ctx->pc = 0x192940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x192944: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x192944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x192948: 0xac600450  sw          $zero, 0x450($v1)
    ctx->pc = 0x192948u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1104), GPR_U32(ctx, 0));
    // 0x19294c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x19294cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x192950: 0xac600510  sw          $zero, 0x510($v1)
    ctx->pc = 0x192950u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1296), GPR_U32(ctx, 0));
    // 0x192954: 0xac6004d0  sw          $zero, 0x4D0($v1)
    ctx->pc = 0x192954u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 0));
    // 0x192958: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x192958u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x19295c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x19295Cu;
    {
        const bool branch_taken_0x19295c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x192960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19295Cu;
        // 0x192960: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19295c) {
            ctx->pc = 0x19292Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19292c;
        }
    }
    ctx->pc = 0x192964u;
label_192964:
    // 0x192964: 0x0  nop
    ctx->pc = 0x192964u;
    // NOP
    // 0x192968: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x192968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19296c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19296cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x192970: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x192970u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192974: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x192974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192978: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x192978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19297c: 0x3e00008  jr          $ra
    ctx->pc = 0x19297Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19297Cu;
        // 0x192980: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19297Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192984u;
}
