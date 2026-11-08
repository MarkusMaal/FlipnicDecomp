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

// Function: fmv_ingame
// Address: 0x181fe0 - 0x1820f4
void fmv_ingame_0x181fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fmv_ingame_0x181fe0");
#endif

    switch (ctx->pc) {
        case 0x182024u: goto label_182024;
        case 0x182048u: goto label_182048;
        case 0x182054u: goto label_182054;
        case 0x182094u: goto label_182094;
        case 0x1820bcu: goto label_1820bc;
        case 0x1820c4u: goto label_1820c4;
        default: break;
    }

    ctx->pc = 0x181fe0u;

    // 0x181fe0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x181fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x181fe4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x181fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x181fe8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x181fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x181fec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x181fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x181ff0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x181ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x181ff4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x181ff4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181ff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x181ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x181ffc: 0x442823  subu        $a1, $v0, $a0
    ctx->pc = 0x181ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x182000: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x182004: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x182004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x182008: 0x8f828664  lw          $v0, -0x799C($gp)
    ctx->pc = 0x182008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936164)));
    // 0x18200c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x18200cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x182010: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x182010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x182014: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x182014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182018: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x182018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x18201c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x18201Cu;
    SET_GPR_U32(ctx, 31, 0x182024u);
    ctx->pc = 0x182020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18201Cu;
    // 0x182020: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x18201Cu, 0x182024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182024u;
label_182024:
    // 0x182024: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x182024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182028: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x182028u;
    {
        const bool branch_taken_0x182028 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182028u;
        // 0x18202c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182028) {
            ctx->pc = 0x18203Cu;
            goto label_18203c;
        }
    }
    ctx->pc = 0x182030u;
    // 0x182030: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x182030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x182034: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x182034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x182038: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x182038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_18203c:
    // 0x18203c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18203cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182040: 0xc080702  jal         func_201C08
    ctx->pc = 0x182040u;
    SET_GPR_U32(ctx, 31, 0x182048u);
    ctx->pc = 0x182044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182040u;
    // 0x182044: 0xaf918660  sw          $s1, -0x79A0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936160), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x182040u, 0x182048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182048u;
label_182048:
    // 0x182048: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x182048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x18204c: 0xc080702  jal         func_201C08
    ctx->pc = 0x18204Cu;
    SET_GPR_U32(ctx, 31, 0x182054u);
    ctx->pc = 0x182050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18204Cu;
    // 0x182050: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x18204Cu, 0x182054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182054u;
label_182054:
    // 0x182054: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x182054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x182058: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x182058u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x18205c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x18205cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x182060: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x182060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x182064: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x182064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x182068: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x182068u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x18206c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x18206cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x182070: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x182070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x182074: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x182074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x182078: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x182078u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x18207c: 0x8f828660  lw          $v0, -0x79A0($gp)
    ctx->pc = 0x18207cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x182080: 0xac530060  sw          $s3, 0x60($v0)
    ctx->pc = 0x182080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 19));
    // 0x182084: 0x8f828660  lw          $v0, -0x79A0($gp)
    ctx->pc = 0x182084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x182088: 0xac520064  sw          $s2, 0x64($v0)
    ctx->pc = 0x182088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 18));
    // 0x18208c: 0xc060064  jal         func_180190
    ctx->pc = 0x18208Cu;
    SET_GPR_U32(ctx, 31, 0x182094u);
    ctx->pc = 0x182090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18208Cu;
    // 0x182090: 0x8f848660  lw          $a0, -0x79A0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180190u, 0x18208Cu, 0x182094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182094u;
label_182094:
    // 0x182094: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x182094u;
    {
        const bool branch_taken_0x182094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182094) {
            ctx->pc = 0x1820D0u;
            goto label_1820d0;
        }
    }
    ctx->pc = 0x18209Cu;
    // 0x18209c: 0x8f908660  lw          $s0, -0x79A0($gp)
    ctx->pc = 0x18209cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x1820a0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1820A0u;
    {
        const bool branch_taken_0x1820a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1820a0) {
            ctx->pc = 0x1820C4u;
            goto label_1820c4;
        }
    }
    ctx->pc = 0x1820A8u;
    // 0x1820a8: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x1820a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1820ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1820ACu;
    {
        const bool branch_taken_0x1820ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1820ac) {
            ctx->pc = 0x1820BCu;
            goto label_1820bc;
        }
    }
    ctx->pc = 0x1820B4u;
    // 0x1820b4: 0xc0485bc  jal         func_1216F0
    ctx->pc = 0x1820B4u;
    SET_GPR_U32(ctx, 31, 0x1820BCu);
    ctx->pc = 0x1216F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216F0u, 0x1820B4u, 0x1820BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1820BCu;
label_1820bc:
    // 0x1820bc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1820BCu;
    SET_GPR_U32(ctx, 31, 0x1820C4u);
    ctx->pc = 0x1820C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1820BCu;
    // 0x1820c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1820BCu, 0x1820C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1820C4u;
label_1820c4:
    // 0x1820c4: 0xaf808660  sw          $zero, -0x79A0($gp)
    ctx->pc = 0x1820c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936160), GPR_U32(ctx, 0));
    // 0x1820c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1820C8u;
    {
        const bool branch_taken_0x1820c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1820CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1820C8u;
        // 0x1820cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1820c8) {
            ctx->pc = 0x1820D8u;
            goto label_1820d8;
        }
    }
    ctx->pc = 0x1820D0u;
label_1820d0:
    // 0x1820d0: 0x8f828660  lw          $v0, -0x79A0($gp)
    ctx->pc = 0x1820d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x1820d4: 0x0  nop
    ctx->pc = 0x1820d4u;
    // NOP
label_1820d8:
    // 0x1820d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1820d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1820dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1820dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1820e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1820e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1820e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1820e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1820e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1820e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1820ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1820ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1820F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1820ECu;
        // 0x1820f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1820ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1820F4u;
}
