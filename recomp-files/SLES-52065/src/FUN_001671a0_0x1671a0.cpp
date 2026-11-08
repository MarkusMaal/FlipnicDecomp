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

// Function: FUN_001671a0
// Address: 0x1671a0 - 0x167370
void FUN_001671a0_0x1671a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001671a0_0x1671a0");
#endif

    switch (ctx->pc) {
        case 0x167264u: goto label_167264;
        case 0x167278u: goto label_167278;
        case 0x167288u: goto label_167288;
        case 0x16729cu: goto label_16729c;
        case 0x1672b8u: goto label_1672b8;
        case 0x1672ccu: goto label_1672cc;
        case 0x167318u: goto label_167318;
        case 0x167338u: goto label_167338;
        case 0x167354u: goto label_167354;
        default: break;
    }

    ctx->pc = 0x1671a0u;

    // 0x1671a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1671a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1671a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1671a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1671a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1671a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1671ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1671acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1671b0: 0x93838488  lbu         $v1, -0x7B78($gp)
    ctx->pc = 0x1671b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x1671b4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1671b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1671b8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1671B8u;
    {
        const bool branch_taken_0x1671b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1671BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1671B8u;
        // 0x1671bc: 0x8084006c  lb          $a0, 0x6C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1671b8) {
            ctx->pc = 0x1671D4u;
            goto label_1671d4;
        }
    }
    ctx->pc = 0x1671C0u;
    // 0x1671c0: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1671c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x1671c4: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x1671c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
    // 0x1671c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1671c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1671cc: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1671ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1671d0: 0x0  nop
    ctx->pc = 0x1671d0u;
    // NOP
label_1671d4:
    // 0x1671d4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1671D4u;
    {
        const bool branch_taken_0x1671d4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1671D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1671D4u;
        // 0x1671d8: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1671d4) {
            ctx->pc = 0x1671E4u;
            goto label_1671e4;
        }
    }
    ctx->pc = 0x1671DCu;
    // 0x1671dc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1671DCu;
    {
        const bool branch_taken_0x1671dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1671E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1671DCu;
        // 0x1671e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1671dc) {
            ctx->pc = 0x167204u;
            goto label_167204;
        }
    }
    ctx->pc = 0x1671E4u;
label_1671e4:
    // 0x1671e4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1671e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1671e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1671e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1671ec: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x1671ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1671f0: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1671F0u;
    {
        const bool branch_taken_0x1671f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1671f0) {
            ctx->pc = 0x167200u;
            goto label_167200;
        }
    }
    ctx->pc = 0x1671F8u;
    // 0x1671f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1671F8u;
    {
        const bool branch_taken_0x1671f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1671f8) {
            ctx->pc = 0x167204u;
            goto label_167204;
        }
    }
    ctx->pc = 0x167200u;
label_167200:
    // 0x167200: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x167200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167204:
    // 0x167204: 0x10800056  beqz        $a0, . + 4 + (0x56 << 2)
    ctx->pc = 0x167204u;
    {
        const bool branch_taken_0x167204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x167204) {
            ctx->pc = 0x167360u;
            goto label_167360;
        }
    }
    ctx->pc = 0x16720Cu;
    // 0x16720c: 0x8e050220  lw          $a1, 0x220($s0)
    ctx->pc = 0x16720cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x167210: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x167210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x167214: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x167214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x167218: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x167218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x16721c: 0xae050220  sw          $a1, 0x220($s0)
    ctx->pc = 0x16721cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 5));
    // 0x167220: 0x8e050220  lw          $a1, 0x220($s0)
    ctx->pc = 0x167220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x167224: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x167224u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x167228: 0x0  nop
    ctx->pc = 0x167228u;
    // NOP
    // 0x16722c: 0x0  nop
    ctx->pc = 0x16722cu;
    // NOP
    // 0x167230: 0x2010  mfhi        $a0
    ctx->pc = 0x167230u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x167234: 0xae040220  sw          $a0, 0x220($s0)
    ctx->pc = 0x167234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 4));
    // 0x167238: 0x8e040220  lw          $a0, 0x220($s0)
    ctx->pc = 0x167238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x16723c: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x16723Cu;
    {
        const bool branch_taken_0x16723c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x167240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16723Cu;
        // 0x167240: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16723c) {
            ctx->pc = 0x1672ACu;
            goto label_1672ac;
        }
    }
    ctx->pc = 0x167244u;
    // 0x167244: 0x1085000e  beq         $a0, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x167244u;
    {
        const bool branch_taken_0x167244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x167244) {
            ctx->pc = 0x167280u;
            goto label_167280;
        }
    }
    ctx->pc = 0x16724Cu;
    // 0x16724c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16724Cu;
    {
        const bool branch_taken_0x16724c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16724c) {
            ctx->pc = 0x16725Cu;
            goto label_16725c;
        }
    }
    ctx->pc = 0x167254u;
    // 0x167254: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x167254u;
    {
        const bool branch_taken_0x167254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167254u;
        // 0x167258: 0x8e040220  lw          $a0, 0x220($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167254) {
            ctx->pc = 0x1672DCu;
            goto label_1672dc;
        }
    }
    ctx->pc = 0x16725Cu;
label_16725c:
    // 0x16725c: 0xc042118  jal         func_108460
    ctx->pc = 0x16725Cu;
    SET_GPR_U32(ctx, 31, 0x167264u);
    ctx->pc = 0x167260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16725Cu;
    // 0x167260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16725Cu, 0x167264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167264u;
label_167264:
    // 0x167264: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x167264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x167268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16726c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16726cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167270: 0xc0425a4  jal         func_109690
    ctx->pc = 0x167270u;
    SET_GPR_U32(ctx, 31, 0x167278u);
    ctx->pc = 0x167274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167270u;
    // 0x167274: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x167270u, 0x167278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167278u;
label_167278:
    // 0x167278: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x167278u;
    {
        const bool branch_taken_0x167278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167278) {
            ctx->pc = 0x1672D8u;
            goto label_1672d8;
        }
    }
    ctx->pc = 0x167280u;
label_167280:
    // 0x167280: 0xc042118  jal         func_108460
    ctx->pc = 0x167280u;
    SET_GPR_U32(ctx, 31, 0x167288u);
    ctx->pc = 0x167284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167280u;
    // 0x167284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x167280u, 0x167288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167288u;
label_167288:
    // 0x167288: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x167288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x16728c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16728cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167290: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167294: 0xc0425a4  jal         func_109690
    ctx->pc = 0x167294u;
    SET_GPR_U32(ctx, 31, 0x16729Cu);
    ctx->pc = 0x167298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167294u;
    // 0x167298: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x167294u, 0x16729Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16729Cu;
label_16729c:
    // 0x16729c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16729cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1672a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1672a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1672a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1672A4u;
    {
        const bool branch_taken_0x1672a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1672A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1672A4u;
        // 0x1672a8: 0xa064002b  sb          $a0, 0x2B($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 43), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1672a4) {
            ctx->pc = 0x1672D8u;
            goto label_1672d8;
        }
    }
    ctx->pc = 0x1672ACu;
label_1672ac:
    // 0x1672ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1672acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1672b0: 0xc042118  jal         func_108460
    ctx->pc = 0x1672B0u;
    SET_GPR_U32(ctx, 31, 0x1672B8u);
    ctx->pc = 0x1672B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1672B0u;
    // 0x1672b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1672B0u, 0x1672B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1672B8u;
label_1672b8:
    // 0x1672b8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1672b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1672bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1672bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1672c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1672c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1672c4: 0xc0425a4  jal         func_109690
    ctx->pc = 0x1672C4u;
    SET_GPR_U32(ctx, 31, 0x1672CCu);
    ctx->pc = 0x1672C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1672C4u;
    // 0x1672c8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x1672C4u, 0x1672CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1672CCu;
label_1672cc:
    // 0x1672cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1672ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1672d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1672d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1672d4: 0xa064002b  sb          $a0, 0x2B($v1)
    ctx->pc = 0x1672d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 43), (uint8_t)GPR_U32(ctx, 4));
label_1672d8:
    // 0x1672d8: 0x8e040220  lw          $a0, 0x220($s0)
    ctx->pc = 0x1672d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_1672dc:
    // 0x1672dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1672dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1672e0: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1672E0u;
    {
        const bool branch_taken_0x1672e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1672E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1672E0u;
        // 0x1672e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1672e0) {
            ctx->pc = 0x167340u;
            goto label_167340;
        }
    }
    ctx->pc = 0x1672E8u;
    // 0x1672e8: 0x1085000d  beq         $a0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1672E8u;
    {
        const bool branch_taken_0x1672e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1672e8) {
            ctx->pc = 0x167320u;
            goto label_167320;
        }
    }
    ctx->pc = 0x1672F0u;
    // 0x1672f0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1672F0u;
    {
        const bool branch_taken_0x1672f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1672f0) {
            ctx->pc = 0x167300u;
            goto label_167300;
        }
    }
    ctx->pc = 0x1672F8u;
    // 0x1672f8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1672F8u;
    {
        const bool branch_taken_0x1672f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1672FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1672F8u;
        // 0x1672fc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1672f8) {
            ctx->pc = 0x167364u;
            goto label_167364;
        }
    }
    ctx->pc = 0x167300u;
label_167300:
    // 0x167300: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x167300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x167304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167308: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16730c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x16730cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x167310: 0xc0425a4  jal         func_109690
    ctx->pc = 0x167310u;
    SET_GPR_U32(ctx, 31, 0x167318u);
    ctx->pc = 0x167314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167310u;
    // 0x167314: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x167310u, 0x167318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167318u;
label_167318:
    // 0x167318: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x167318u;
    {
        const bool branch_taken_0x167318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167318) {
            ctx->pc = 0x167360u;
            goto label_167360;
        }
    }
    ctx->pc = 0x167320u;
label_167320:
    // 0x167320: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x167320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x167324: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x167324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x167328: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16732c: 0xae030200  sw          $v1, 0x200($s0)
    ctx->pc = 0x16732cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 3));
    // 0x167330: 0xc0425a4  jal         func_109690
    ctx->pc = 0x167330u;
    SET_GPR_U32(ctx, 31, 0x167338u);
    ctx->pc = 0x167334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167330u;
    // 0x167334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x167330u, 0x167338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167338u;
label_167338:
    // 0x167338: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x167338u;
    {
        const bool branch_taken_0x167338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167338) {
            ctx->pc = 0x167360u;
            goto label_167360;
        }
    }
    ctx->pc = 0x167340u;
label_167340:
    // 0x167340: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x167340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x167344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167348: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16734c: 0xc0425a4  jal         func_109690
    ctx->pc = 0x16734Cu;
    SET_GPR_U32(ctx, 31, 0x167354u);
    ctx->pc = 0x167350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16734Cu;
    // 0x167350: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x16734Cu, 0x167354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167354u;
label_167354:
    // 0x167354: 0x3c034086  lui         $v1, 0x4086
    ctx->pc = 0x167354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16518 << 16));
    // 0x167358: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x167358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x16735c: 0xae030200  sw          $v1, 0x200($s0)
    ctx->pc = 0x16735cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 3));
label_167360:
    // 0x167360: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x167360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_167364:
    // 0x167364: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167368: 0x3e00008  jr          $ra
    ctx->pc = 0x167368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167368u;
        // 0x16736c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167370u;
}
