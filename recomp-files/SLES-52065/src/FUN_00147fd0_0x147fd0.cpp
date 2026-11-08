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

// Function: FUN_00147fd0
// Address: 0x147fd0 - 0x148460
void FUN_00147fd0_0x147fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00147fd0_0x147fd0");
#endif

    switch (ctx->pc) {
        case 0x148014u: goto label_148014;
        case 0x14802cu: goto label_14802c;
        case 0x148064u: goto label_148064;
        case 0x1480e8u: goto label_1480e8;
        case 0x148108u: goto label_148108;
        case 0x14812cu: goto label_14812c;
        case 0x148190u: goto label_148190;
        case 0x1481ccu: goto label_1481cc;
        case 0x148200u: goto label_148200;
        case 0x148218u: goto label_148218;
        case 0x148250u: goto label_148250;
        case 0x1482d4u: goto label_1482d4;
        case 0x1482f0u: goto label_1482f0;
        case 0x148314u: goto label_148314;
        case 0x148378u: goto label_148378;
        case 0x1483acu: goto label_1483ac;
        default: break;
    }

    ctx->pc = 0x147fd0u;

    // 0x147fd0: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x147fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
    // 0x147fd4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x147fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x147fd8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x147fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x147fdc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x147fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x147fe0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x147fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x147fe4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x147fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x147fe8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x147fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x147fec: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x147fecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147ff0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x147ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x147ff4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x147ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x147ff8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x147ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x147ffc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x147ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x148000: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x148000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x148004: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x148004u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x148008: 0x8ea60028  lw          $a2, 0x28($s5)
    ctx->pc = 0x148008u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x14800c: 0xc052340  jal         func_148D00
    ctx->pc = 0x14800Cu;
    SET_GPR_U32(ctx, 31, 0x148014u);
    ctx->pc = 0x148010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14800Cu;
    // 0x148010: 0x26a50014  addiu       $a1, $s5, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148D00u, 0x14800Cu, 0x148014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148014u;
label_148014:
    // 0x148014: 0x8ea30028  lw          $v1, 0x28($s5)
    ctx->pc = 0x148014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x148018: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x148018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14801c: 0x8ea2002c  lw          $v0, 0x2C($s5)
    ctx->pc = 0x14801cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x148020: 0x26a50014  addiu       $a1, $s5, 0x14
    ctx->pc = 0x148020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    // 0x148024: 0xc052340  jal         func_148D00
    ctx->pc = 0x148024u;
    SET_GPR_U32(ctx, 31, 0x14802Cu);
    ctx->pc = 0x148028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148024u;
    // 0x148028: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148D00u, 0x148024u, 0x14802Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14802Cu;
label_14802c:
    // 0x14802c: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x14802cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x148030: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x148030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x148034: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x148034u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148038: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x148038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14803c: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x14803cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x148040: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x148040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x148044: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x148044u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x148048: 0x7ca70000  sq          $a3, 0x0($a1)
    ctx->pc = 0x148048u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 7));
    // 0x14804c: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x14804cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x148050: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x148050u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x148054: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x148054u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x148058: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x148058u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x14805c: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14805Cu;
    SET_GPR_U32(ctx, 31, 0x148064u);
    ctx->pc = 0x148060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14805Cu;
    // 0x148060: 0xfcc20010  sd          $v0, 0x10($a2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14805Cu, 0x148064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148064u;
label_148064:
    // 0x148064: 0x27b301bc  addiu       $s3, $sp, 0x1BC
    ctx->pc = 0x148064u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
    // 0x148068: 0x27b6017c  addiu       $s6, $sp, 0x17C
    ctx->pc = 0x148068u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
    // 0x14806c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x14806cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x148070: 0x27b201c0  addiu       $s2, $sp, 0x1C0
    ctx->pc = 0x148070u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x148074: 0x27be0180  addiu       $fp, $sp, 0x180
    ctx->pc = 0x148074u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x148078: 0x27b101c4  addiu       $s1, $sp, 0x1C4
    ctx->pc = 0x148078u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
    // 0x14807c: 0x27b70184  addiu       $s7, $sp, 0x184
    ctx->pc = 0x14807cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x148080: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x148080u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x148084: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x148084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x148088: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x148088u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x14808c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14808cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x148090: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x148090u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x148094: 0x8fb4019c  lw          $s4, 0x19C($sp)
    ctx->pc = 0x148094u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x148098: 0x10740048  beq         $v1, $s4, . + 4 + (0x48 << 2)
    ctx->pc = 0x148098u;
    {
        const bool branch_taken_0x148098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x148098) {
            ctx->pc = 0x1481BCu;
            goto label_1481bc;
        }
    }
    ctx->pc = 0x1480A0u;
    // 0x1480a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1480a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1480a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1480a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1480a8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1480a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1480ac: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1480acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1480b0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1480b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1480b4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1480b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1480b8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1480b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1480bc: 0x1443003b  bne         $v0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x1480BCu;
    {
        const bool branch_taken_0x1480bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1480C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1480BCu;
        // 0x1480c0: 0x27a201b8  addiu       $v0, $sp, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1480bc) {
            ctx->pc = 0x1481ACu;
            goto label_1481ac;
        }
    }
    ctx->pc = 0x1480C4u;
    // 0x1480c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1480c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1480c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1480c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1480cc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1480ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1480d0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1480D0u;
    {
        const bool branch_taken_0x1480d0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1480D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1480D0u;
        // 0x1480d4: 0x28083  sra         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1480d0) {
            ctx->pc = 0x1480E0u;
            goto label_1480e0;
        }
    }
    ctx->pc = 0x1480D8u;
    // 0x1480d8: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1480d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1480dc: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x1480dcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
label_1480e0:
    // 0x1480e0: 0xc050224  jal         func_140890
    ctx->pc = 0x1480E0u;
    SET_GPR_U32(ctx, 31, 0x1480E8u);
    ctx->pc = 0x1480E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1480E0u;
    // 0x1480e4: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x1480E0u, 0x1480E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1480E8u;
label_1480e8:
    // 0x1480e8: 0x27a201b8  addiu       $v0, $sp, 0x1B8
    ctx->pc = 0x1480e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x1480ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1480ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1480f0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1480f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1480f4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1480f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1480f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1480f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1480fc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1480fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x148100: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x148100u;
    {
        const bool branch_taken_0x148100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148100u;
        // 0x148104: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148100) {
            ctx->pc = 0x1481ACu;
            goto label_1481ac;
        }
    }
    ctx->pc = 0x148108u;
label_148108:
    // 0x148108: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x148108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14810c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x14810cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x148110: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x148110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148114: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x148114u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148118: 0x0  nop
    ctx->pc = 0x148118u;
    // NOP
    // 0x14811c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x14811Cu;
    {
        const bool branch_taken_0x14811c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x148120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14811Cu;
        // 0x148120: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14811c) {
            ctx->pc = 0x148144u;
            goto label_148144;
        }
    }
    ctx->pc = 0x148124u;
    // 0x148124: 0xc052118  jal         func_148460
    ctx->pc = 0x148124u;
    SET_GPR_U32(ctx, 31, 0x14812Cu);
    ctx->pc = 0x148128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148124u;
    // 0x148128: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148460u, 0x148124u, 0x14812Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14812Cu;
label_14812c:
    // 0x14812c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x14812cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x148130: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x148130u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x148134: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x148134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x148138: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x148138u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x14813c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14813cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x148140: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x148140u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_148144:
    // 0x148144: 0x0  nop
    ctx->pc = 0x148144u;
    // NOP
    // 0x148148: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x148148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14814c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14814cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x148150: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x148150u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x148154: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x148154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x148158: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x148158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x14815c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x14815cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x148160: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x148160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x148164: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x148164u;
    {
        const bool branch_taken_0x148164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x148168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148164u;
        // 0x148168: 0x27a201b8  addiu       $v0, $sp, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148164) {
            ctx->pc = 0x1481ACu;
            goto label_1481ac;
        }
    }
    ctx->pc = 0x14816Cu;
    // 0x14816c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14816cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x148170: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x148170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x148174: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x148174u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x148178: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x148178u;
    {
        const bool branch_taken_0x148178 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148178u;
        // 0x14817c: 0x28083  sra         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148178) {
            ctx->pc = 0x148188u;
            goto label_148188;
        }
    }
    ctx->pc = 0x148180u;
    // 0x148180: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x148180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x148184: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x148184u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
label_148188:
    // 0x148188: 0xc050224  jal         func_140890
    ctx->pc = 0x148188u;
    SET_GPR_U32(ctx, 31, 0x148190u);
    ctx->pc = 0x14818Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148188u;
    // 0x14818c: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x148188u, 0x148190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148190u;
label_148190:
    // 0x148190: 0x27a201b8  addiu       $v0, $sp, 0x1B8
    ctx->pc = 0x148190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x148194: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x148194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x148198: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x148198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14819c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x14819cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1481a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1481a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1481a4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1481a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1481a8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1481a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1481ac:
    // 0x1481ac: 0x0  nop
    ctx->pc = 0x1481acu;
    // NOP
    // 0x1481b0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1481b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1481b4: 0x1454ffd4  bne         $v0, $s4, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1481B4u;
    {
        const bool branch_taken_0x1481b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1481b4) {
            ctx->pc = 0x148108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148108;
        }
    }
    ctx->pc = 0x1481BCu;
label_1481bc:
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
            goto label_14839c;
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
            goto label_148390;
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
            goto label_1482cc;
        }
    }
    ctx->pc = 0x1482C4u;
    // 0x1482c4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1482c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1482c8: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x1482c8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
label_1482cc:
    // 0x1482cc: 0xc050224  jal         func_140890
    ctx->pc = 0x1482CCu;
    SET_GPR_U32(ctx, 31, 0x1482D4u);
    ctx->pc = 0x1482D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1482CCu;
    // 0x1482d0: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x1482CCu, 0x1482D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1482D4u;
label_1482d4:
    // 0x1482d4: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x1482d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1482d8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1482d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1482dc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1482dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1482e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1482e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1482e4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1482e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1482e8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1482E8u;
    {
        const bool branch_taken_0x1482e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1482ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1482E8u;
        // 0x1482ec: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1482e8) {
            ctx->pc = 0x148390u;
            goto label_148390;
        }
    }
    ctx->pc = 0x1482F0u;
label_1482f0:
    // 0x1482f0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1482f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1482f4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1482f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1482f8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1482f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1482fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1482fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148300: 0x0  nop
    ctx->pc = 0x148300u;
    // NOP
    // 0x148304: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x148304u;
    {
        const bool branch_taken_0x148304 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x148308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148304u;
        // 0x148308: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148304) {
            ctx->pc = 0x14832Cu;
            goto label_14832c;
        }
    }
    ctx->pc = 0x14830Cu;
    // 0x14830c: 0xc052118  jal         func_148460
    ctx->pc = 0x14830Cu;
    SET_GPR_U32(ctx, 31, 0x148314u);
    ctx->pc = 0x148310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14830Cu;
    // 0x148310: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148460u, 0x14830Cu, 0x148314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148314u;
label_148314:
    // 0x148314: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x148314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x148318: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x148318u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x14831c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x14831cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x148320: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x148320u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x148324: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x148324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x148328: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x148328u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_14832c:
    // 0x14832c: 0x0  nop
    ctx->pc = 0x14832cu;
    // NOP
    // 0x148330: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x148330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x148334: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x148334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x148338: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x148338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x14833c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x14833cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x148340: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x148340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x148344: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x148344u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x148348: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x148348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14834c: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14834Cu;
    {
        const bool branch_taken_0x14834c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x148350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14834Cu;
        // 0x148350: 0x27be0218  addiu       $fp, $sp, 0x218 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14834c) {
            ctx->pc = 0x148390u;
            goto label_148390;
        }
    }
    ctx->pc = 0x148354u;
    // 0x148354: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x148354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x148358: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x148358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14835c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14835cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x148360: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x148360u;
    {
        const bool branch_taken_0x148360 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x148364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148360u;
        // 0x148364: 0x28083  sra         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148360) {
            ctx->pc = 0x148370u;
            goto label_148370;
        }
    }
    ctx->pc = 0x148368u;
    // 0x148368: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x148368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x14836c: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x14836cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
label_148370:
    // 0x148370: 0xc050224  jal         func_140890
    ctx->pc = 0x148370u;
    SET_GPR_U32(ctx, 31, 0x148378u);
    ctx->pc = 0x148374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148370u;
    // 0x148374: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x148370u, 0x148378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148378u;
label_148378:
    // 0x148378: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x148378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x14837c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x14837cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x148380: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x148380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148384: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x148384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x148388: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x148388u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x14838c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x14838cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_148390:
    // 0x148390: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x148390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x148394: 0x1455ffd6  bne         $v0, $s5, . + 4 + (-0x2A << 2)
    ctx->pc = 0x148394u;
    {
        const bool branch_taken_0x148394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x148394) {
            ctx->pc = 0x1482F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1482f0;
        }
    }
    ctx->pc = 0x14839Cu;
label_14839c:
    // 0x14839c: 0x0  nop
    ctx->pc = 0x14839cu;
    // NOP
    // 0x1483a0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1483a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1483a4: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1483A4u;
    SET_GPR_U32(ctx, 31, 0x1483ACu);
    ctx->pc = 0x1483A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1483A4u;
    // 0x1483a8: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1483A4u, 0x1483ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1483ACu;
label_1483ac:
    // 0x1483ac: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1483acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1483b0: 0x27a3011c  addiu       $v1, $sp, 0x11C
    ctx->pc = 0x1483b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x1483b4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1483b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1483b8: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1483b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1483bc: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x1483bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x1483c0: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1483c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1483c4: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x1483c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x1483c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1483c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1483cc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1483ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1483d0: 0x4601a032  c.eq.s      $f20, $f1
    ctx->pc = 0x1483d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1483d4: 0x0  nop
    ctx->pc = 0x1483d4u;
    // NOP
    // 0x1483d8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1483D8u;
    {
        const bool branch_taken_0x1483d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1483DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1483D8u;
        // 0x1483dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1483d8) {
            ctx->pc = 0x1483E8u;
            goto label_1483e8;
        }
    }
    ctx->pc = 0x1483E0u;
    // 0x1483e0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1483E0u;
    {
        const bool branch_taken_0x1483e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1483E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1483E0u;
        // 0x1483e4: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1483e0) {
            ctx->pc = 0x148430u;
            goto label_148430;
        }
    }
    ctx->pc = 0x1483E8u;
label_1483e8:
    // 0x1483e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1483e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1483ec: 0x0  nop
    ctx->pc = 0x1483ecu;
    // NOP
    // 0x1483f0: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1483f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1483f4: 0x0  nop
    ctx->pc = 0x1483f4u;
    // NOP
    // 0x1483f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1483F8u;
    {
        const bool branch_taken_0x1483f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1483FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1483F8u;
        // 0x1483fc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1483f8) {
            ctx->pc = 0x148408u;
            goto label_148408;
        }
    }
    ctx->pc = 0x148400u;
    // 0x148400: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x148400u;
    {
        const bool branch_taken_0x148400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148400u;
        // 0x148404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148400) {
            ctx->pc = 0x14842Cu;
            goto label_14842c;
        }
    }
    ctx->pc = 0x148408u;
label_148408:
    // 0x148408: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14840c: 0x0  nop
    ctx->pc = 0x14840cu;
    // NOP
    // 0x148410: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x148410u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148414: 0x0  nop
    ctx->pc = 0x148414u;
    // NOP
    // 0x148418: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x148418u;
    {
        const bool branch_taken_0x148418 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x148418) {
            ctx->pc = 0x148428u;
            goto label_148428;
        }
    }
    ctx->pc = 0x148420u;
    // 0x148420: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x148420u;
    {
        const bool branch_taken_0x148420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148420u;
        // 0x148424: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148420) {
            ctx->pc = 0x14842Cu;
            goto label_14842c;
        }
    }
    ctx->pc = 0x148428u;
label_148428:
    // 0x148428: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x148428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14842c:
    // 0x14842c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x14842cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_148430:
    // 0x148430: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x148430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x148434: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x148434u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x148438: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x148438u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14843c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x14843cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x148440: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x148440u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x148444: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x148444u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x148448: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x148448u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14844c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14844cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x148450: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x148450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148454: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x148454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148458: 0x3e00008  jr          $ra
    ctx->pc = 0x148458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148458u;
        // 0x14845c: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148460u;
}
