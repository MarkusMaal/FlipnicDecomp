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

// Function: unk_text_display_related
// Address: 0x188700 - 0x1887ac
void unk_text_display_related_0x188700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("unk_text_display_related_0x188700");
#endif

    switch (ctx->pc) {
        case 0x188730u: goto label_188730;
        default: break;
    }

    ctx->pc = 0x188700u;

    // 0x188700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x188700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x188704: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x188704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x188708: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x188708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18870c: 0x2442b148  addiu       $v0, $v0, -0x4EB8
    ctx->pc = 0x18870cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947144));
    // 0x188710: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x188710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x188714: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x188714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x188718: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x188718u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18871c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18871cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x188720: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x188720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188724: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x188724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188728: 0xc04b38c  jal         func_12CE30
    ctx->pc = 0x188728u;
    SET_GPR_U32(ctx, 31, 0x188730u);
    ctx->pc = 0x18872Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188728u;
    // 0x18872c: 0xac820094  sw          $v0, 0x94($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CE30u, 0x188728u, 0x188730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188730u;
label_188730:
    // 0x188730: 0xae320050  sw          $s2, 0x50($s1)
    ctx->pc = 0x188730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 18));
    // 0x188734: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x188734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x188738: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x188738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18873c: 0x3c054200  lui         $a1, 0x4200
    ctx->pc = 0x18873cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16896 << 16));
    // 0x188740: 0x3c0443f0  lui         $a0, 0x43F0
    ctx->pc = 0x188740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17392 << 16));
    // 0x188744: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x188744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x188748: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x188748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18874c: 0xae260054  sw          $a2, 0x54($s1)
    ctx->pc = 0x18874cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 6));
    // 0x188750: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x188750u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x188754: 0xae260058  sw          $a2, 0x58($s1)
    ctx->pc = 0x188754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 6));
    // 0x188758: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x188758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
    // 0x18875c: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x18875cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x188760: 0xae250064  sw          $a1, 0x64($s1)
    ctx->pc = 0x188760u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 5));
    // 0x188764: 0xae250068  sw          $a1, 0x68($s1)
    ctx->pc = 0x188764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 5));
    // 0x188768: 0xae24006c  sw          $a0, 0x6C($s1)
    ctx->pc = 0x188768u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 4));
    // 0x18876c: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x18876cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
    // 0x188770: 0xae230074  sw          $v1, 0x74($s1)
    ctx->pc = 0x188770u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 3));
    // 0x188774: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x188774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
    // 0x188778: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x188778u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
    // 0x18877c: 0xa2200080  sb          $zero, 0x80($s1)
    ctx->pc = 0x18877cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 128), (uint8_t)GPR_U32(ctx, 0));
    // 0x188780: 0xa2200081  sb          $zero, 0x81($s1)
    ctx->pc = 0x188780u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 129), (uint8_t)GPR_U32(ctx, 0));
    // 0x188784: 0xae200090  sw          $zero, 0x90($s1)
    ctx->pc = 0x188784u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x188788: 0xae20008c  sw          $zero, 0x8C($s1)
    ctx->pc = 0x188788u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
    // 0x18878c: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x18878cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
    // 0x188790: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x188790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
    // 0x188794: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x188794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188798: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x188798u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18879c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18879cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1887a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1887a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1887a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1887A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1887A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1887A4u;
        // 0x1887a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1887A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1887ACu;
}
