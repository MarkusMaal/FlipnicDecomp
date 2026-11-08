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

// Function: FUN_0012c160
// Address: 0x12c160 - 0x12c38c
void FUN_0012c160_0x12c160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012c160_0x12c160");
#endif

    switch (ctx->pc) {
        case 0x12c180u: goto label_12c180;
        case 0x12c2c8u: goto label_12c2c8;
        case 0x12c2e0u: goto label_12c2e0;
        default: break;
    }

    ctx->pc = 0x12c160u;

    // 0x12c160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12c160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12c164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12c164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12c168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12c168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12c16c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12c16cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c170: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12c170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c174: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x12c174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c178: 0xc07d7e6  jal         func_1F5F98
    ctx->pc = 0x12C178u;
    SET_GPR_U32(ctx, 31, 0x12C180u);
    ctx->pc = 0x12C17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C178u;
    // 0x12c17c: 0x26060044  addiu       $a2, $s0, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5F98u, 0x12C178u, 0x12C180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C180u;
label_12c180:
    // 0x12c180: 0x18400027  blez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x12C180u;
    {
        const bool branch_taken_0x12c180 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x12c180) {
            ctx->pc = 0x12C220u;
            goto label_12c220;
        }
    }
    ctx->pc = 0x12C188u;
    // 0x12c188: 0x92020044  lbu         $v0, 0x44($s0)
    ctx->pc = 0x12c188u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x12c18c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x12C18Cu;
    {
        const bool branch_taken_0x12c18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c18c) {
            ctx->pc = 0x12C220u;
            goto label_12c220;
        }
    }
    ctx->pc = 0x12C194u;
    // 0x12c194: 0x92030046  lbu         $v1, 0x46($s0)
    ctx->pc = 0x12c194u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x12c198: 0x92020047  lbu         $v0, 0x47($s0)
    ctx->pc = 0x12c198u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x12c19c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x12c19cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x12c1a0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x12c1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12c1a4: 0x3842ffff  xori        $v0, $v0, 0xFFFF
    ctx->pc = 0x12c1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)65535);
    // 0x12c1a8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x12c1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x12c1ac: 0x92020049  lbu         $v0, 0x49($s0)
    ctx->pc = 0x12c1acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x12c1b0: 0x28410058  slti        $at, $v0, 0x58
    ctx->pc = 0x12c1b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)88) ? 1 : 0);
    // 0x12c1b4: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x12C1B4u;
    {
        const bool branch_taken_0x12c1b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C1B4u;
        // 0x12c1b8: 0x284100a9  slti        $at, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)169) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c1b4) {
            ctx->pc = 0x12C1E4u;
            goto label_12c1e4;
        }
    }
    ctx->pc = 0x12C1BCu;
    // 0x12c1bc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x12C1BCu;
    {
        const bool branch_taken_0x12c1bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c1bc) {
            ctx->pc = 0x12C1E4u;
            goto label_12c1e4;
        }
    }
    ctx->pc = 0x12C1C4u;
    // 0x12c1c4: 0x92020048  lbu         $v0, 0x48($s0)
    ctx->pc = 0x12c1c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x12c1c8: 0x28410058  slti        $at, $v0, 0x58
    ctx->pc = 0x12c1c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)88) ? 1 : 0);
    // 0x12c1cc: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C1CCu;
    {
        const bool branch_taken_0x12c1cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C1CCu;
        // 0x12c1d0: 0x284100a9  slti        $at, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)169) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c1cc) {
            ctx->pc = 0x12C1E4u;
            goto label_12c1e4;
        }
    }
    ctx->pc = 0x12C1D4u;
    // 0x12c1d4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C1D4u;
    {
        const bool branch_taken_0x12c1d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C1D4u;
        // 0x12c1d8: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c1d4) {
            ctx->pc = 0x12C1E4u;
            goto label_12c1e4;
        }
    }
    ctx->pc = 0x12C1DCu;
    // 0x12c1dc: 0xa2020048  sb          $v0, 0x48($s0)
    ctx->pc = 0x12c1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c1e0: 0xa2020049  sb          $v0, 0x49($s0)
    ctx->pc = 0x12c1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 2));
label_12c1e4:
    // 0x12c1e4: 0x9202004b  lbu         $v0, 0x4B($s0)
    ctx->pc = 0x12c1e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 75)));
    // 0x12c1e8: 0x28410058  slti        $at, $v0, 0x58
    ctx->pc = 0x12c1e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)88) ? 1 : 0);
    // 0x12c1ec: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x12C1ECu;
    {
        const bool branch_taken_0x12c1ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C1ECu;
        // 0x12c1f0: 0x284100a9  slti        $at, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)169) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c1ec) {
            ctx->pc = 0x12C224u;
            goto label_12c224;
        }
    }
    ctx->pc = 0x12C1F4u;
    // 0x12c1f4: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x12C1F4u;
    {
        const bool branch_taken_0x12c1f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c1f4) {
            ctx->pc = 0x12C224u;
            goto label_12c224;
        }
    }
    ctx->pc = 0x12C1FCu;
    // 0x12c1fc: 0x9202004a  lbu         $v0, 0x4A($s0)
    ctx->pc = 0x12c1fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x12c200: 0x28410058  slti        $at, $v0, 0x58
    ctx->pc = 0x12c200u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)88) ? 1 : 0);
    // 0x12c204: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x12C204u;
    {
        const bool branch_taken_0x12c204 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C204u;
        // 0x12c208: 0x284100a9  slti        $at, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)169) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c204) {
            ctx->pc = 0x12C224u;
            goto label_12c224;
        }
    }
    ctx->pc = 0x12C20Cu;
    // 0x12c20c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C20Cu;
    {
        const bool branch_taken_0x12c20c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C20Cu;
        // 0x12c210: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c20c) {
            ctx->pc = 0x12C224u;
            goto label_12c224;
        }
    }
    ctx->pc = 0x12C214u;
    // 0x12c214: 0xa202004a  sb          $v0, 0x4A($s0)
    ctx->pc = 0x12c214u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 74), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c218: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12C218u;
    {
        const bool branch_taken_0x12c218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C218u;
        // 0x12c21c: 0xa202004b  sb          $v0, 0x4B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 75), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c218) {
            ctx->pc = 0x12C224u;
            goto label_12c224;
        }
    }
    ctx->pc = 0x12C220u;
label_12c220:
    // 0x12c220: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x12c220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_12c224:
    // 0x12c224: 0x82020069  lb          $v0, 0x69($s0)
    ctx->pc = 0x12c224u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 105)));
    // 0x12c228: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x12C228u;
    {
        const bool branch_taken_0x12c228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c228) {
            ctx->pc = 0x12C2B4u;
            goto label_12c2b4;
        }
    }
    ctx->pc = 0x12C230u;
    // 0x12c230: 0x9202004b  lbu         $v0, 0x4B($s0)
    ctx->pc = 0x12c230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 75)));
    // 0x12c234: 0x9203004a  lbu         $v1, 0x4A($s0)
    ctx->pc = 0x12c234u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x12c238: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x12c238u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12c23c: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x12c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x12c240: 0x22023  negu        $a0, $v0
    ctx->pc = 0x12c240u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x12c244: 0x30a20023  andi        $v0, $a1, 0x23
    ctx->pc = 0x12c244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)35);
    // 0x12c248: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x12C248u;
    {
        const bool branch_taken_0x12c248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C248u;
        // 0x12c24c: 0x2463ff80  addiu       $v1, $v1, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c248) {
            ctx->pc = 0x12C2ACu;
            goto label_12c2ac;
        }
    }
    ctx->pc = 0x12C250u;
    // 0x12c250: 0x28610041  slti        $at, $v1, 0x41
    ctx->pc = 0x12c250u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x12c254: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C254u;
    {
        const bool branch_taken_0x12c254 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C254u;
        // 0x12c258: 0x2861ffc0  slti        $at, $v1, -0x40 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967232) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c254) {
            ctx->pc = 0x12C268u;
            goto label_12c268;
        }
    }
    ctx->pc = 0x12C25Cu;
    // 0x12c25c: 0x34a22000  ori         $v0, $a1, 0x2000
    ctx->pc = 0x12c25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x12c260: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12C260u;
    {
        const bool branch_taken_0x12c260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C260u;
        // 0x12c264: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c260) {
            ctx->pc = 0x12C274u;
            goto label_12c274;
        }
    }
    ctx->pc = 0x12C268u;
label_12c268:
    // 0x12c268: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x12C268u;
    {
        const bool branch_taken_0x12c268 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C268u;
        // 0x12c26c: 0x34a28000  ori         $v0, $a1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c268) {
            ctx->pc = 0x12C274u;
            goto label_12c274;
        }
    }
    ctx->pc = 0x12C270u;
    // 0x12c270: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x12c270u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_12c274:
    // 0x12c274: 0x28810041  slti        $at, $a0, 0x41
    ctx->pc = 0x12c274u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x12c278: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C278u;
    {
        const bool branch_taken_0x12c278 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C278u;
        // 0x12c27c: 0x2881ffc0  slti        $at, $a0, -0x40 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967232) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c278) {
            ctx->pc = 0x12C294u;
            goto label_12c294;
        }
    }
    ctx->pc = 0x12C280u;
    // 0x12c280: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x12c280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x12c284: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12c284u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12c288: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x12c288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x12c28c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12C28Cu;
    {
        const bool branch_taken_0x12c28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C28Cu;
        // 0x12c290: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c28c) {
            ctx->pc = 0x12C2ACu;
            goto label_12c2ac;
        }
    }
    ctx->pc = 0x12C294u;
label_12c294:
    // 0x12c294: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C294u;
    {
        const bool branch_taken_0x12c294 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C294u;
        // 0x12c298: 0x30a2ffff  andi        $v0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c294) {
            ctx->pc = 0x12C2B0u;
            goto label_12c2b0;
        }
    }
    ctx->pc = 0x12C29Cu;
    // 0x12c29c: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x12c29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x12c2a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12c2a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12c2a4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12c2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12c2a8: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x12c2a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_12c2ac:
    // 0x12c2ac: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x12c2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_12c2b0:
    // 0x12c2b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x12c2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_12c2b4:
    // 0x12c2b4: 0x8202006b  lb          $v0, 0x6B($s0)
    ctx->pc = 0x12c2b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 107)));
    // 0x12c2b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C2B8u;
    {
        const bool branch_taken_0x12c2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C2B8u;
        // 0x12c2bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c2b8) {
            ctx->pc = 0x12C2CCu;
            goto label_12c2cc;
        }
    }
    ctx->pc = 0x12C2C0u;
    // 0x12c2c0: 0xc0467d4  jal         func_119F50
    ctx->pc = 0x12C2C0u;
    SET_GPR_U32(ctx, 31, 0x12C2C8u);
    ctx->pc = 0x12C2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C2C0u;
    // 0x12c2c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119F50u, 0x12C2C0u, 0x12C2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C2C8u;
label_12c2c8:
    // 0x12c2c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12c2c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12c2cc:
    // 0x12c2cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x12c2ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c2d0: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x12c2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x12c2d4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x12c2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12c2d8: 0x24057fff  addiu       $a1, $zero, 0x7FFF
    ctx->pc = 0x12c2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x12c2dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12c2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12c2e0:
    // 0x12c2e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x12c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12c2e4: 0x1073004  sllv        $a2, $a3, $t0
    ctx->pc = 0x12c2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 8) & 0x1F));
    // 0x12c2e8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x12c2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x12c2ec: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12C2ECu;
    {
        const bool branch_taken_0x12c2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C2ECu;
        // 0x12c2f0: 0x2093021  addu        $a2, $s0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c2ec) {
            ctx->pc = 0x12C324u;
            goto label_12c324;
        }
    }
    ctx->pc = 0x12C2F4u;
    // 0x12c2f4: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x12c2f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x12c2f8: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C2F8u;
    {
        const bool branch_taken_0x12c2f8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x12C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C2F8u;
        // 0x12c2fc: 0x24ca0004  addiu       $t2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c2f8) {
            ctx->pc = 0x12C30Cu;
            goto label_12c30c;
        }
    }
    ctx->pc = 0x12C300u;
    // 0x12c300: 0xa4c20024  sh          $v0, 0x24($a2)
    ctx->pc = 0x12c300u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x12c304: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x12C304u;
    {
        const bool branch_taken_0x12c304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C304u;
        // 0x12c308: 0xa5470000  sh          $a3, 0x0($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c304) {
            ctx->pc = 0x12C360u;
            goto label_12c360;
        }
    }
    ctx->pc = 0x12C30Cu;
label_12c30c:
    // 0x12c30c: 0x0  nop
    ctx->pc = 0x12c30cu;
    // NOP
    // 0x12c310: 0x10450013  beq         $v0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x12C310u;
    {
        const bool branch_taken_0x12c310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x12c310) {
            ctx->pc = 0x12C360u;
            goto label_12c360;
        }
    }
    ctx->pc = 0x12C318u;
    // 0x12c318: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12c318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12c31c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x12C31Cu;
    {
        const bool branch_taken_0x12c31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C31Cu;
        // 0x12c320: 0xa5420000  sh          $v0, 0x0($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c31c) {
            ctx->pc = 0x12C360u;
            goto label_12c360;
        }
    }
    ctx->pc = 0x12C324u;
label_12c324:
    // 0x12c324: 0x0  nop
    ctx->pc = 0x12c324u;
    // NOP
    // 0x12c328: 0x2093021  addu        $a2, $s0, $t1
    ctx->pc = 0x12c328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x12c32c: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x12c32cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x12c330: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C330u;
    {
        const bool branch_taken_0x12c330 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C330u;
        // 0x12c334: 0x24ca0004  addiu       $t2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c330) {
            ctx->pc = 0x12C344u;
            goto label_12c344;
        }
    }
    ctx->pc = 0x12C338u;
    // 0x12c338: 0xa4c20024  sh          $v0, 0x24($a2)
    ctx->pc = 0x12c338u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x12c33c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12C33Cu;
    {
        const bool branch_taken_0x12c33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C33Cu;
        // 0x12c340: 0xa5440000  sh          $a0, 0x0($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c33c) {
            ctx->pc = 0x12C360u;
            goto label_12c360;
        }
    }
    ctx->pc = 0x12C344u;
label_12c344:
    // 0x12c344: 0x0  nop
    ctx->pc = 0x12c344u;
    // NOP
    // 0x12c348: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C348u;
    {
        const bool branch_taken_0x12c348 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x12c348) {
            ctx->pc = 0x12C360u;
            goto label_12c360;
        }
    }
    ctx->pc = 0x12C350u;
    // 0x12c350: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C350u;
    {
        const bool branch_taken_0x12c350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x12c350) {
            ctx->pc = 0x12C360u;
            goto label_12c360;
        }
    }
    ctx->pc = 0x12C358u;
    // 0x12c358: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12c358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12c35c: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x12c35cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
label_12c360:
    // 0x12c360: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x12c360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x12c364: 0x29020010  slti        $v0, $t0, 0x10
    ctx->pc = 0x12c364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x12c368: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x12C368u;
    {
        const bool branch_taken_0x12c368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C368u;
        // 0x12c36c: 0x25290002  addiu       $t1, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c368) {
            ctx->pc = 0x12C2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c2e0;
        }
    }
    ctx->pc = 0x12C370u;
    // 0x12c370: 0x92020045  lbu         $v0, 0x45($s0)
    ctx->pc = 0x12c370u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x12c374: 0xa2020064  sb          $v0, 0x64($s0)
    ctx->pc = 0x12c374u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c378: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x12c378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12c37c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12c37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c380: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12c380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c384: 0x3e00008  jr          $ra
    ctx->pc = 0x12C384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C384u;
        // 0x12c388: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C38Cu;
}
