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

// Function: caseD_1
// Address: 0x1a62b4 - 0x1a6344
void caseD_1_0x1a62b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1a62b4");
#endif

    switch (ctx->pc) {
        case 0x1a62c4u: goto label_1a62c4;
        case 0x1a62ccu: goto label_1a62cc;
        case 0x1a62d8u: goto label_1a62d8;
        case 0x1a62ecu: goto label_1a62ec;
        case 0x1a633cu: goto label_1a633c;
        default: break;
    }

    ctx->pc = 0x1a62b4u;

    // 0x1a62b4: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1a62b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x1a62b8: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1a62b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1a62bc: 0xc06bd80  jal         func_1AF600
    ctx->pc = 0x1A62BCu;
    SET_GPR_U32(ctx, 31, 0x1A62C4u);
    ctx->pc = 0x1A62C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A62BCu;
    // 0x1a62c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF600u, 0x1A62BCu, 0x1A62C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A62C4u;
label_1a62c4:
    // 0x1a62c4: 0xc062114  jal         func_188450
    ctx->pc = 0x1A62C4u;
    SET_GPR_U32(ctx, 31, 0x1A62CCu);
    ctx->pc = 0x1A62C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A62C4u;
    // 0x1a62c8: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1A62C4u, 0x1A62CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A62CCu;
label_1a62cc:
    // 0x1a62cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a62ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a62d0: 0xc062114  jal         func_188450
    ctx->pc = 0x1A62D0u;
    SET_GPR_U32(ctx, 31, 0x1A62D8u);
    ctx->pc = 0x1A62D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A62D0u;
    // 0x1a62d4: 0x2404003d  addiu       $a0, $zero, 0x3D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1A62D0u, 0x1A62D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A62D8u;
label_1a62d8:
    // 0x1a62d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a62d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a62dc: 0x8e8400e8  lw          $a0, 0xE8($s4)
    ctx->pc = 0x1a62dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
    // 0x1a62e0: 0xde8500c8  ld          $a1, 0xC8($s4)
    ctx->pc = 0x1a62e0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x1a62e4: 0xc081c20  jal         func_207080
    ctx->pc = 0x1A62E4u;
    SET_GPR_U32(ctx, 31, 0x1A62ECu);
    ctx->pc = 0x1A62E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A62E4u;
    // 0x1a62e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x1A62E4u, 0x1A62ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A62ECu;
label_1a62ec:
    // 0x1a62ec: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1a62ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1a62f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a62f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a62f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a62f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a62f8: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1a62f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1a62fc: 0xffb00018  sd          $s0, 0x18($sp)
    ctx->pc = 0x1a62fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 16));
    // 0x1a6300: 0x24422bf0  addiu       $v0, $v0, 0x2BF0
    ctx->pc = 0x1a6300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11248));
    // 0x1a6304: 0xde8300d0  ld          $v1, 0xD0($s4)
    ctx->pc = 0x1a6304u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x1a6308: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x1a6308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1a630c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1a630cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6310: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1a6310u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6314: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x1a6314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
    // 0x1a6318: 0xffb20028  sd          $s2, 0x28($sp)
    ctx->pc = 0x1a6318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 18));
    // 0x1a631c: 0x8e8300e0  lw          $v1, 0xE0($s4)
    ctx->pc = 0x1a631cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
    // 0x1a6320: 0x8e8800e8  lw          $t0, 0xE8($s4)
    ctx->pc = 0x1a6320u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
    // 0x1a6324: 0xde8a00c8  ld          $t2, 0xC8($s4)
    ctx->pc = 0x1a6324u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x1a6328: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a6328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a632c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a632cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a6330: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6334: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1A6334u;
    SET_GPR_U32(ctx, 31, 0x1A633Cu);
    ctx->pc = 0x1A6338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6334u;
    // 0x1a6338: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1A6334u, 0x1A633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A633Cu;
label_1a633c:
    // 0x1a633c: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x1A633Cu;
    {
        const bool branch_taken_0x1a633c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A633Cu;
        // 0x1a6340: 0x8e8300f8  lw          $v1, 0xF8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a633c) {
            ctx->pc = 0x1A64B4u;
            return;
        }
    }
    ctx->pc = 0x1A6344u;
}
