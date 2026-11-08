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

// Function: entry_001481bc
// Address: 0x1481bc - 0x1482cc
void entry_001481bc_0x1481bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001481bc_0x1481bc");
#endif

    switch (ctx->pc) {
        case 0x1481ccu: goto label_1481cc;
        case 0x148200u: goto label_148200;
        case 0x148218u: goto label_148218;
        case 0x148250u: goto label_148250;
        default: break;
    }

    ctx->pc = 0x1481bcu;

    // 0x1481bc: 0x0  nop
    ctx->pc = 0x1481bcu;
    // NOP
    // 0x1481c0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1481c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1481c4: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1481C4u;
    SET_GPR_U32(ctx, 31, 0x1481CCu);
    ctx->pc = 0x1481C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1481C4u;
    // 0x1481c8: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1481C4u, 0x1481CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1481CCu;
label_1481cc:
    // 0x1481cc: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1481ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1481d0: 0x27a300bc  addiu       $v1, $sp, 0xBC
    ctx->pc = 0x1481d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x1481d4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1481d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1481d8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1481d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1481dc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1481dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1481e0: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1481e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1481e4: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1481e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1481e8: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x1481e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x1481ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1481ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1481f0: 0x8ea60028  lw          $a2, 0x28($s5)
    ctx->pc = 0x1481f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x1481f4: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x1481f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1481f8: 0xc052340  jal         func_148D00
    ctx->pc = 0x1481F8u;
    SET_GPR_U32(ctx, 31, 0x148200u);
    ctx->pc = 0x1481FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1481F8u;
    // 0x1481fc: 0x26a50014  addiu       $a1, $s5, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148D00u, 0x1481F8u, 0x148200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148200u;
label_148200:
    // 0x148200: 0x8ea30028  lw          $v1, 0x28($s5)
    ctx->pc = 0x148200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x148204: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x148204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x148208: 0x8ea2002c  lw          $v0, 0x2C($s5)
    ctx->pc = 0x148208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x14820c: 0x26a50014  addiu       $a1, $s5, 0x14
    ctx->pc = 0x14820cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    // 0x148210: 0xc052340  jal         func_148D00
    ctx->pc = 0x148210u;
    SET_GPR_U32(ctx, 31, 0x148218u);
    ctx->pc = 0x148214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148210u;
    // 0x148214: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148D00u, 0x148210u, 0x148218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148218u;
label_148218:
    // 0x148218: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x148218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x14821c: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x14821cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x148220: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x148220u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148224: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x148224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x148228: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x148228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x14822c: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x14822cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x148230: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x148230u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x148234: 0x7ca70000  sq          $a3, 0x0($a1)
    ctx->pc = 0x148234u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 7));
    // 0x148238: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x148238u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x14823c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x14823cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x148240: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x148240u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x148244: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x148244u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x148248: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x148248u;
    SET_GPR_U32(ctx, 31, 0x148250u);
    ctx->pc = 0x14824Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148248u;
    // 0x14824c: 0xfcc20010  sd          $v0, 0x10($a2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x148248u, 0x148250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148250u;
label_148250:
    // 0x148250: 0x27b3021c  addiu       $s3, $sp, 0x21C
    ctx->pc = 0x148250u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 540));
    // 0x148254: 0x27b401dc  addiu       $s4, $sp, 0x1DC
    ctx->pc = 0x148254u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
    // 0x148258: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x148258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14825c: 0x27b20220  addiu       $s2, $sp, 0x220
    ctx->pc = 0x14825cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x148260: 0x27b701e0  addiu       $s7, $sp, 0x1E0
    ctx->pc = 0x148260u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x148264: 0x27b10224  addiu       $s1, $sp, 0x224
    ctx->pc = 0x148264u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 548));
    // 0x148268: 0x27b601e4  addiu       $s6, $sp, 0x1E4
    ctx->pc = 0x148268u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
    // 0x14826c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x14826cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x148270: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x148270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x148274: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x148274u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x148278: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x148278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14827c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x14827cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x148280: 0x8fb501fc  lw          $s5, 0x1FC($sp)
    ctx->pc = 0x148280u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x148284: 0x10750045  beq         $v1, $s5, . + 4 + (0x45 << 2)
    ctx->pc = 0x148284u;
    {
        const bool branch_taken_0x148284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x148284) {
            ctx->pc = 0x14839Cu;
            return;
        }
    }
    ctx->pc = 0x14828Cu;
    // 0x14828c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14828cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x148290: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x148290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x148294: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x148294u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x148298: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x148298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14829c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x14829cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1482a0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1482a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1482a4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1482a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1482a8: 0x14430039  bne         $v0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x1482A8u;
    {
        const bool branch_taken_0x1482a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1482ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1482A8u;
        // 0x1482ac: 0x27be0218  addiu       $fp, $sp, 0x218 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1482a8) {
            ctx->pc = 0x148390u;
            return;
        }
    }
    ctx->pc = 0x1482B0u;
    // 0x1482b0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1482b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1482b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1482b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1482b8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1482b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1482bc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1482BCu;
    {
        const bool branch_taken_0x1482bc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1482C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1482BCu;
        // 0x1482c0: 0x28083  sra         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1482bc) {
            ctx->pc = 0x1482CCu;
            return;
        }
    }
    ctx->pc = 0x1482C4u;
    // 0x1482c4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1482c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1482c8: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x1482c8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x1482ccu;
}
