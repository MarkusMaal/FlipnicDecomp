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

// Function: FUN_001d7928
// Address: 0x1d7928 - 0x1d79cc
void FUN_001d7928_0x1d7928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d7928_0x1d7928");
#endif

    switch (ctx->pc) {
        case 0x1d7984u: goto label_1d7984;
        case 0x1d7998u: goto label_1d7998;
        case 0x1d79acu: goto label_1d79ac;
        default: break;
    }

    ctx->pc = 0x1d7928u;

    // 0x1d7928: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1d7928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1d792c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1d792cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1d7930: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x1d7930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x1d7934: 0x3c120037  lui         $s2, 0x37
    ctx->pc = 0x1d7934u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
    // 0x1d7938: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x1d7938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x1d793c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d793cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7940: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x1d7940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x1d7944: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x1d7944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x1d7948: 0x8e42054c  lw          $v0, 0x54C($s2)
    ctx->pc = 0x1d7948u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x37054Cu));
    // 0x1d794c: 0x8ca70550  lw          $a3, 0x550($a1)
    ctx->pc = 0x1d794cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x370550u));
    // 0x1d7950: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1d7950u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d7954: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x1d7954u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1d7958: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1d7958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1d795c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1d795cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d7960: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1d7960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7964: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d7964u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d7968: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d7968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d796c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d796cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d7970: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d7970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d7974: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1d7974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1d7978: 0xac450300  sw          $a1, 0x300($v0)
    ctx->pc = 0x1d7978u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 768), GPR_U32(ctx, 5));
    // 0x1d797c: 0xc07730c  jal         func_1DCC30
    ctx->pc = 0x1D797Cu;
    SET_GPR_U32(ctx, 31, 0x1D7984u);
    ctx->pc = 0x1D7980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D797Cu;
    // 0x1d7980: 0x8ce50004  lw          $a1, 0x4($a3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCC30u, 0x1D797Cu, 0x1D7984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7984u;
label_1d7984:
    // 0x1d7984: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d7984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d7988: 0x600000a  bltz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D7988u;
    {
        const bool branch_taken_0x1d7988 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7988u;
        // 0x1d798c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7988) {
            ctx->pc = 0x1D79B4u;
            goto label_1d79b4;
        }
    }
    ctx->pc = 0x1D7990u;
    // 0x1d7990: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x1d7990u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d7994: 0x8e42054c  lw          $v0, 0x54C($s2)
    ctx->pc = 0x1d7994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1356)));
label_1d7998:
    // 0x1d7998: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d7998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d799c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d799cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d79a0: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d79a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d79a4: 0xc07762e  jal         func_1DD8B8
    ctx->pc = 0x1D79A4u;
    SET_GPR_U32(ctx, 31, 0x1D79ACu);
    ctx->pc = 0x1D79A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D79A4u;
    // 0x1d79a8: 0x90450002  lbu         $a1, 0x2($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD8B8u, 0x1D79A4u, 0x1D79ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D79ACu;
label_1d79ac:
    // 0x1d79ac: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D79ACu;
    {
        const bool branch_taken_0x1d79ac = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1D79B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79ACu;
        // 0x1d79b0: 0x8e42054c  lw          $v0, 0x54C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d79ac) {
            ctx->pc = 0x1D7998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7998;
        }
    }
    ctx->pc = 0x1D79B4u;
label_1d79b4:
    // 0x1d79b4: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x1d79b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d79b8: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x1d79b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1d79bc: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x1d79bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d79c0: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x1d79c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1d79c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D79C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D79C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79C4u;
        // 0x1d79c8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D79C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D79CCu;
}
