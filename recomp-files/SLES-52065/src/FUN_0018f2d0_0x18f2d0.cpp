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

// Function: FUN_0018f2d0
// Address: 0x18f2d0 - 0x18f388
void FUN_0018f2d0_0x18f2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018f2d0_0x18f2d0");
#endif

    switch (ctx->pc) {
        case 0x18f2f8u: goto label_18f2f8;
        case 0x18f308u: goto label_18f308;
        case 0x18f350u: goto label_18f350;
        case 0x18f35cu: goto label_18f35c;
        default: break;
    }

    ctx->pc = 0x18f2d0u;

    // 0x18f2d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18f2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18f2d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18f2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18f2d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18f2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18f2dc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18f2dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f2e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18f2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18f2e4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x18f2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x18f2e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18f2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18f2ec: 0x2484fdb0  addiu       $a0, $a0, -0x250
    ctx->pc = 0x18f2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966704));
    // 0x18f2f0: 0xc046458  jal         func_119160
    ctx->pc = 0x18F2F0u;
    SET_GPR_U32(ctx, 31, 0x18F2F8u);
    ctx->pc = 0x18F2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F2F0u;
    // 0x18f2f4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x18F2F0u, 0x18F2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F2F8u;
label_18f2f8:
    // 0x18f2f8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x18f2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x18f2fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18f2fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f300: 0xc046458  jal         func_119160
    ctx->pc = 0x18F300u;
    SET_GPR_U32(ctx, 31, 0x18F308u);
    ctx->pc = 0x18F304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F300u;
    // 0x18f304: 0x2484fdc0  addiu       $a0, $a0, -0x240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x18F300u, 0x18F308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F308u;
label_18f308:
    // 0x18f308: 0xa6700408  sh          $s0, 0x408($s3)
    ctx->pc = 0x18f308u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1032), (uint16_t)GPR_U32(ctx, 16));
    // 0x18f30c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18f30cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f310: 0xa662040a  sh          $v0, 0x40A($s3)
    ctx->pc = 0x18f310u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1034), (uint16_t)GPR_U32(ctx, 2));
    // 0x18f314: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18f314u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f318: 0xa6700828  sh          $s0, 0x828($s3)
    ctx->pc = 0x18f318u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2088), (uint16_t)GPR_U32(ctx, 16));
    // 0x18f31c: 0xa662082a  sh          $v0, 0x82A($s3)
    ctx->pc = 0x18f31cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2090), (uint16_t)GPR_U32(ctx, 2));
    // 0x18f320: 0xa6700c48  sh          $s0, 0xC48($s3)
    ctx->pc = 0x18f320u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 3144), (uint16_t)GPR_U32(ctx, 16));
    // 0x18f324: 0xa6620c4a  sh          $v0, 0xC4A($s3)
    ctx->pc = 0x18f324u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 3146), (uint16_t)GPR_U32(ctx, 2));
    // 0x18f328: 0xa6701068  sh          $s0, 0x1068($s3)
    ctx->pc = 0x18f328u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4200), (uint16_t)GPR_U32(ctx, 16));
    // 0x18f32c: 0xa662106a  sh          $v0, 0x106A($s3)
    ctx->pc = 0x18f32cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4202), (uint16_t)GPR_U32(ctx, 2));
    // 0x18f330: 0xa6701488  sh          $s0, 0x1488($s3)
    ctx->pc = 0x18f330u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 5256), (uint16_t)GPR_U32(ctx, 16));
    // 0x18f334: 0xa662148a  sh          $v0, 0x148A($s3)
    ctx->pc = 0x18f334u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 5258), (uint16_t)GPR_U32(ctx, 2));
    // 0x18f338: 0xa67018a8  sh          $s0, 0x18A8($s3)
    ctx->pc = 0x18f338u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6312), (uint16_t)GPR_U32(ctx, 16));
    // 0x18f33c: 0xa66218aa  sh          $v0, 0x18AA($s3)
    ctx->pc = 0x18f33cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6314), (uint16_t)GPR_U32(ctx, 2));
    // 0x18f340: 0xa6701cc8  sh          $s0, 0x1CC8($s3)
    ctx->pc = 0x18f340u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 7368), (uint16_t)GPR_U32(ctx, 16));
    // 0x18f344: 0xa6621cca  sh          $v0, 0x1CCA($s3)
    ctx->pc = 0x18f344u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 7370), (uint16_t)GPR_U32(ctx, 2));
    // 0x18f348: 0xa67020e8  sh          $s0, 0x20E8($s3)
    ctx->pc = 0x18f348u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8424), (uint16_t)GPR_U32(ctx, 16));
    // 0x18f34c: 0xa66220ea  sh          $v0, 0x20EA($s3)
    ctx->pc = 0x18f34cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8426), (uint16_t)GPR_U32(ctx, 2));
label_18f350:
    // 0x18f350: 0x2722021  addu        $a0, $s3, $s2
    ctx->pc = 0x18f350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x18f354: 0xc05ebe8  jal         func_17AFA0
    ctx->pc = 0x18F354u;
    SET_GPR_U32(ctx, 31, 0x18F35Cu);
    ctx->pc = 0x18F358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F354u;
    // 0x18f358: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AFA0u, 0x18F354u, 0x18F35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F35Cu;
label_18f35c:
    // 0x18f35c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18f35cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18f360: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x18f360u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x18f364: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18F364u;
    {
        const bool branch_taken_0x18f364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F364u;
        // 0x18f368: 0x26520420  addiu       $s2, $s2, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f364) {
            ctx->pc = 0x18F350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f350;
        }
    }
    ctx->pc = 0x18F36Cu;
    // 0x18f36c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18f36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18f370: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18f370u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18f374: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18f374u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f378: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18f378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f37c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f37cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f380: 0x3e00008  jr          $ra
    ctx->pc = 0x18F380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F380u;
        // 0x18f384: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F388u;
}
