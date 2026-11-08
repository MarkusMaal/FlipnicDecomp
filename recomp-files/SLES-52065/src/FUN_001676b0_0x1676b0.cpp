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

// Function: FUN_001676b0
// Address: 0x1676b0 - 0x16774c
void FUN_001676b0_0x1676b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001676b0_0x1676b0");
#endif

    switch (ctx->pc) {
        case 0x1676c8u: goto label_1676c8;
        case 0x167708u: goto label_167708;
        default: break;
    }

    ctx->pc = 0x1676b0u;

    // 0x1676b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1676b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1676b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1676b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1676b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1676b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1676bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1676bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1676c0: 0xc0563cc  jal         func_158F30
    ctx->pc = 0x1676C0u;
    SET_GPR_U32(ctx, 31, 0x1676C8u);
    ctx->pc = 0x1676C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1676C0u;
    // 0x1676c4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x1676C0u, 0x1676C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1676C8u;
label_1676c8:
    // 0x1676c8: 0xa22001d0  sb          $zero, 0x1D0($s1)
    ctx->pc = 0x1676c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 464), (uint8_t)GPR_U32(ctx, 0));
    // 0x1676cc: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1676ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1676d0: 0x82030024  lb          $v1, 0x24($s0)
    ctx->pc = 0x1676d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1676d4: 0xa6230224  sh          $v1, 0x224($s1)
    ctx->pc = 0x1676d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 3));
    // 0x1676d8: 0x86230224  lh          $v1, 0x224($s1)
    ctx->pc = 0x1676d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x1676dc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1676DCu;
    {
        const bool branch_taken_0x1676dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1676E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1676DCu;
        // 0x1676e0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1676dc) {
            ctx->pc = 0x1676E8u;
            goto label_1676e8;
        }
    }
    ctx->pc = 0x1676E4u;
    // 0x1676e4: 0xa6230224  sh          $v1, 0x224($s1)
    ctx->pc = 0x1676e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 3));
label_1676e8:
    // 0x1676e8: 0x86230226  lh          $v1, 0x226($s1)
    ctx->pc = 0x1676e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 550)));
    // 0x1676ec: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1676ECu;
    {
        const bool branch_taken_0x1676ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1676ec) {
            ctx->pc = 0x167708u;
            goto label_167708;
        }
    }
    ctx->pc = 0x1676F4u;
    // 0x1676f4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1676f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1676f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1676f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1676fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1676fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167700: 0xc0425a4  jal         func_109690
    ctx->pc = 0x167700u;
    SET_GPR_U32(ctx, 31, 0x167708u);
    ctx->pc = 0x167704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167700u;
    // 0x167704: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x167700u, 0x167708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167708u;
label_167708:
    // 0x167708: 0x86240224  lh          $a0, 0x224($s1)
    ctx->pc = 0x167708u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x16770c: 0x240307f8  addiu       $v1, $zero, 0x7F8
    ctx->pc = 0x16770cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
    // 0x167710: 0xa6240226  sh          $a0, 0x226($s1)
    ctx->pc = 0x167710u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 550), (uint16_t)GPR_U32(ctx, 4));
    // 0x167714: 0x92040023  lbu         $a0, 0x23($s0)
    ctx->pc = 0x167714u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x167718: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x167718u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x16771c: 0xa6240222  sh          $a0, 0x222($s1)
    ctx->pc = 0x16771cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 546), (uint16_t)GPR_U32(ctx, 4));
    // 0x167720: 0x86240222  lh          $a0, 0x222($s1)
    ctx->pc = 0x167720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 546)));
    // 0x167724: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x167724u;
    {
        const bool branch_taken_0x167724 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x167728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167724u;
        // 0x167728: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167724) {
            ctx->pc = 0x167730u;
            goto label_167730;
        }
    }
    ctx->pc = 0x16772Cu;
    // 0x16772c: 0xa6230222  sh          $v1, 0x222($s1)
    ctx->pc = 0x16772cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 546), (uint16_t)GPR_U32(ctx, 3));
label_167730:
    // 0x167730: 0xa6200220  sh          $zero, 0x220($s1)
    ctx->pc = 0x167730u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 544), (uint16_t)GPR_U32(ctx, 0));
    // 0x167734: 0xa6200228  sh          $zero, 0x228($s1)
    ctx->pc = 0x167734u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 552), (uint16_t)GPR_U32(ctx, 0));
    // 0x167738: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x167738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16773c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16773cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167740: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167744: 0x3e00008  jr          $ra
    ctx->pc = 0x167744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167744u;
        // 0x167748: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16774Cu;
}
