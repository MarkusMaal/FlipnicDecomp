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

// Function: FUN_0013f140
// Address: 0x13f140 - 0x13f2e4
void FUN_0013f140_0x13f140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013f140_0x13f140");
#endif

    switch (ctx->pc) {
        case 0x13f17cu: goto label_13f17c;
        case 0x13f18cu: goto label_13f18c;
        case 0x13f19cu: goto label_13f19c;
        case 0x13f1d0u: goto label_13f1d0;
        case 0x13f1f4u: goto label_13f1f4;
        case 0x13f27cu: goto label_13f27c;
        case 0x13f288u: goto label_13f288;
        case 0x13f298u: goto label_13f298;
        case 0x13f2a0u: goto label_13f2a0;
        default: break;
    }

    ctx->pc = 0x13f140u;

    // 0x13f140: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x13f140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x13f144: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13f144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13f148: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13f148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13f14c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13f14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13f150: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13f150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13f154: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13f154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13f158: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x13f158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13f15c: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x13F15Cu;
    {
        const bool branch_taken_0x13f15c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F15Cu;
        // 0x13f160: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f15c) {
            ctx->pc = 0x13F2C8u;
            goto label_13f2c8;
        }
    }
    ctx->pc = 0x13F164u;
    // 0x13f164: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x13f164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x13f168: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x13f168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13f16c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x13f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x13f170: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13f170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f174: 0xc0500a8  jal         func_1402A0
    ctx->pc = 0x13F174u;
    SET_GPR_U32(ctx, 31, 0x13F17Cu);
    ctx->pc = 0x13F178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F174u;
    // 0x13f178: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1402A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1402A0u, 0x13F174u, 0x13F17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F17Cu;
label_13f17c:
    // 0x13f17c: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x13f17cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x13f180: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13f180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13f184: 0xc0500a8  jal         func_1402A0
    ctx->pc = 0x13F184u;
    SET_GPR_U32(ctx, 31, 0x13F18Cu);
    ctx->pc = 0x13F188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F184u;
    // 0x13f188: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1402A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1402A0u, 0x13F184u, 0x13F18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F18Cu;
label_13f18c:
    // 0x13f18c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13f18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f190: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x13f190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13f194: 0xc0500ec  jal         func_1403B0
    ctx->pc = 0x13F194u;
    SET_GPR_U32(ctx, 31, 0x13F19Cu);
    ctx->pc = 0x13F198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F194u;
    // 0x13f198: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1403B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1403B0u, 0x13F194u, 0x13F19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F19Cu;
label_13f19c:
    // 0x13f19c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x13f19cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x13f1a0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x13f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x13f1a4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x13f1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13f1a8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x13f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13f1ac: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x13f1acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13f1b0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13F1B0u;
    {
        const bool branch_taken_0x13f1b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f1b0) {
            ctx->pc = 0x13F1D8u;
            goto label_13f1d8;
        }
    }
    ctx->pc = 0x13F1B8u;
    // 0x13f1b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13f1bc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x13f1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x13f1c0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x13f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13f1c4: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x13f1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x13f1c8: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x13F1C8u;
    SET_GPR_U32(ctx, 31, 0x13F1D0u);
    ctx->pc = 0x13F1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F1C8u;
    // 0x13f1cc: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x13F1C8u, 0x13F1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F1D0u;
label_13f1d0:
    // 0x13f1d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13F1D0u;
    {
        const bool branch_taken_0x13f1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1D0u;
        // 0x13f1d4: 0x8fa300b0  lw          $v1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f1d0) {
            ctx->pc = 0x13F1F8u;
            goto label_13f1f8;
        }
    }
    ctx->pc = 0x13F1D8u;
label_13f1d8:
    // 0x13f1d8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x13f1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13f1dc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x13f1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x13f1e0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x13f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13f1e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13f1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13f1e8: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x13f1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x13f1ec: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x13F1ECu;
    SET_GPR_U32(ctx, 31, 0x13F1F4u);
    ctx->pc = 0x13F1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F1ECu;
    // 0x13f1f0: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x13F1ECu, 0x13F1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F1F4u;
label_13f1f4:
    // 0x13f1f4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x13f1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_13f1f8:
    // 0x13f1f8: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x13f1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x13f1fc: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x13f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x13f200: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x13f200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x13f204: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x13f204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
    // 0x13f208: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x13f208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x13f20c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13f210: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x13f210u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x13f214: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13f214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13f218: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13f218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13f21c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x13f21cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x13f220: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x13f220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13f224: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x13f224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13f228: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x13f228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13f22c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13F22Cu;
    {
        const bool branch_taken_0x13f22c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F22Cu;
        // 0x13f230: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f22c) {
            ctx->pc = 0x13F24Cu;
            goto label_13f24c;
        }
    }
    ctx->pc = 0x13F234u;
    // 0x13f234: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x13f234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13f238: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13f238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13f23c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x13f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13f240: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13f240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13f244: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13f248: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x13f248u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
label_13f24c:
    // 0x13f24c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x13f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x13f250: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x13f250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x13f254: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x13f254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x13f258: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13f258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f25c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x13f25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x13f260: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x13f260u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x13f264: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x13f264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x13f268: 0x8cf00004  lw          $s0, 0x4($a3)
    ctx->pc = 0x13f268u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x13f26c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x13f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13f270: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13f270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13f274: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x13F274u;
    SET_GPR_U32(ctx, 31, 0x13F27Cu);
    ctx->pc = 0x13F278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F274u;
    // 0x13f278: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x13F274u, 0x13F27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F27Cu;
label_13f27c:
    // 0x13f27c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x13f27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13f280: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x13F280u;
    SET_GPR_U32(ctx, 31, 0x13F288u);
    ctx->pc = 0x13F284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F280u;
    // 0x13f284: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x13F280u, 0x13F288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F288u;
label_13f288:
    // 0x13f288: 0x8fb200a4  lw          $s2, 0xA4($sp)
    ctx->pc = 0x13f288u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x13f28c: 0x8fb300a8  lw          $s3, 0xA8($sp)
    ctx->pc = 0x13f28cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13f290: 0x1250000d  beq         $s2, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x13F290u;
    {
        const bool branch_taken_0x13f290 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        ctx->pc = 0x13F294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F290u;
        // 0x13f294: 0x8fb100a0  lw          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f290) {
            ctx->pc = 0x13F2C8u;
            goto label_13f2c8;
        }
    }
    ctx->pc = 0x13F298u;
label_13f298:
    // 0x13f298: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13F298u;
    SET_GPR_U32(ctx, 31, 0x13F2A0u);
    ctx->pc = 0x13F29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F298u;
    // 0x13f29c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13F298u, 0x13F2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F2A0u;
label_13f2a0:
    // 0x13f2a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13f2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13f2a4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x13f2a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x13f2a8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x13f2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x13f2ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13f2acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13f2b0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x13f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13f2b4: 0x16630002  bne         $s3, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13F2B4u;
    {
        const bool branch_taken_0x13f2b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x13F2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F2B4u;
        // 0x13f2b8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f2b4) {
            ctx->pc = 0x13F2C0u;
            goto label_13f2c0;
        }
    }
    ctx->pc = 0x13F2BCu;
    // 0x13f2bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x13f2bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13f2c0:
    // 0x13f2c0: 0x1650fff5  bne         $s2, $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x13F2C0u;
    {
        const bool branch_taken_0x13f2c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x13f2c0) {
            ctx->pc = 0x13F298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13f298;
        }
    }
    ctx->pc = 0x13F2C8u;
label_13f2c8:
    // 0x13f2c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13f2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13f2cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13f2ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13f2d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13f2d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13f2d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13f2d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f2d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f2d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f2dc: 0x3e00008  jr          $ra
    ctx->pc = 0x13F2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F2DCu;
        // 0x13f2e0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F2DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F2E4u;
}
