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

// Function: FUN_001f8120
// Address: 0x1f8120 - 0x1f82d4
void FUN_001f8120_0x1f8120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f8120_0x1f8120");
#endif

    switch (ctx->pc) {
        case 0x1f8168u: goto label_1f8168;
        case 0x1f817cu: goto label_1f817c;
        case 0x1f8184u: goto label_1f8184;
        case 0x1f818cu: goto label_1f818c;
        case 0x1f81a0u: goto label_1f81a0;
        case 0x1f81a8u: goto label_1f81a8;
        case 0x1f81d8u: goto label_1f81d8;
        case 0x1f81ecu: goto label_1f81ec;
        case 0x1f81f0u: goto label_1f81f0;
        case 0x1f8244u: goto label_1f8244;
        case 0x1f8250u: goto label_1f8250;
        case 0x1f8278u: goto label_1f8278;
        case 0x1f829cu: goto label_1f829c;
        default: break;
    }

    ctx->pc = 0x1f8120u;

    // 0x1f8120: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1f8120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1f8124: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x1f8124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x1f8128: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x1f8128u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
    // 0x1f812c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1f812cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1f8130: 0x8ea2d6bc  lw          $v0, -0x2944($s5)
    ctx->pc = 0x1f8130u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6BCu));
    // 0x1f8134: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x1f8134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x1f8138: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x1f8138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x1f813c: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x1f813cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x1f8140: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1f8140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1f8144: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x1f8144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x1f8148: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F8148u;
    {
        const bool branch_taken_0x1f8148 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8148u;
        // 0x1f814c: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8148) {
            ctx->pc = 0x1F816Cu;
            goto label_1f816c;
        }
    }
    ctx->pc = 0x1F8150u;
    // 0x1f8150: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8154: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1f8154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1f8158: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1f8158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1f815c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f815cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f8160: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F8160u;
    SET_GPR_U32(ctx, 31, 0x1F8168u);
    ctx->pc = 0x1F8164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8160u;
    // 0x1f8164: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F8160u, 0x1F8168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8168u;
label_1f8168:
    // 0x1f8168: 0xaea2d6bc  sw          $v0, -0x2944($s5)
    ctx->pc = 0x1f8168u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294956732), GPR_U32(ctx, 2));
label_1f816c:
    // 0x1f816c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f816cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8170: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f8170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8174: 0xc07e2d2  jal         func_1F8B48
    ctx->pc = 0x1F8174u;
    SET_GPR_U32(ctx, 31, 0x1F817Cu);
    ctx->pc = 0x1F8178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8174u;
    // 0x1f8178: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8B48u, 0x1F8174u, 0x1F817Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F817Cu;
label_1f817c:
    // 0x1f817c: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F817Cu;
    SET_GPR_U32(ctx, 31, 0x1F8184u);
    ctx->pc = 0x1F8180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F817Cu;
    // 0x1f8180: 0x8ea4d6bc  lw          $a0, -0x2944($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F817Cu, 0x1F8184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8184u;
label_1f8184:
    // 0x1f8184: 0xc07b79a  jal         func_1EDE68
    ctx->pc = 0x1F8184u;
    SET_GPR_U32(ctx, 31, 0x1F818Cu);
    ctx->pc = 0x1F8188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8184u;
    // 0x1f8188: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDE68u, 0x1F8184u, 0x1F818Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F818Cu;
label_1f818c:
    // 0x1f818c: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f818cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1f8190: 0x3c160039  lui         $s6, 0x39
    ctx->pc = 0x1f8190u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
    // 0x1f8194: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F8194u;
    {
        const bool branch_taken_0x1f8194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8194u;
        // 0x1f8198: 0x3c140039  lui         $s4, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8194) {
            ctx->pc = 0x1F81C4u;
            goto label_1f81c4;
        }
    }
    ctx->pc = 0x1F819Cu;
    // 0x1f819c: 0x0  nop
    ctx->pc = 0x1f819cu;
    // NOP
label_1f81a0:
    // 0x1f81a0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1f81a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1f81a4: 0x0  nop
    ctx->pc = 0x1f81a4u;
    // NOP
label_1f81a8:
    // 0x1f81a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f81a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f81ac: 0x0  nop
    ctx->pc = 0x1f81acu;
    // NOP
    // 0x1f81b0: 0x0  nop
    ctx->pc = 0x1f81b0u;
    // NOP
    // 0x1f81b4: 0x0  nop
    ctx->pc = 0x1f81b4u;
    // NOP
    // 0x1f81b8: 0x0  nop
    ctx->pc = 0x1f81b8u;
    // NOP
    // 0x1f81bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F81BCu;
    {
        const bool branch_taken_0x1f81bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f81bc) {
            ctx->pc = 0x1F81A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f81a8;
        }
    }
    ctx->pc = 0x1F81C4u;
label_1f81c4:
    // 0x1f81c4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1f81c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1f81c8: 0x26041600  addiu       $a0, $s0, 0x1600
    ctx->pc = 0x1f81c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5632));
    // 0x1f81cc: 0x34a50400  ori         $a1, $a1, 0x400
    ctx->pc = 0x1f81ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1024);
    // 0x1f81d0: 0xc07b96a  jal         func_1EE5A8
    ctx->pc = 0x1F81D0u;
    SET_GPR_U32(ctx, 31, 0x1F81D8u);
    ctx->pc = 0x1F81D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F81D0u;
    // 0x1f81d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE5A8u, 0x1F81D0u, 0x1F81D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F81D8u;
label_1f81d8:
    // 0x1f81d8: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F81D8u;
    {
        const bool branch_taken_0x1f81d8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F81DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F81D8u;
        // 0x1f81dc: 0x26121600  addiu       $s2, $s0, 0x1600 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 5632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f81d8) {
            ctx->pc = 0x1F820Cu;
            goto label_1f820c;
        }
    }
    ctx->pc = 0x1F81E0u;
    // 0x1f81e0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f81e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f81e4: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F81E4u;
    SET_GPR_U32(ctx, 31, 0x1F81ECu);
    ctx->pc = 0x1F81E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F81E4u;
    // 0x1f81e8: 0x24844858  addiu       $a0, $a0, 0x4858 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F81E4u, 0x1F81ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F81ECu;
label_1f81ec:
    // 0x1f81ec: 0x0  nop
    ctx->pc = 0x1f81ecu;
    // NOP
label_1f81f0:
    // 0x1f81f0: 0x0  nop
    ctx->pc = 0x1f81f0u;
    // NOP
    // 0x1f81f4: 0x0  nop
    ctx->pc = 0x1f81f4u;
    // NOP
    // 0x1f81f8: 0x0  nop
    ctx->pc = 0x1f81f8u;
    // NOP
    // 0x1f81fc: 0x0  nop
    ctx->pc = 0x1f81fcu;
    // NOP
    // 0x1f8200: 0x0  nop
    ctx->pc = 0x1f8200u;
    // NOP
    // 0x1f8204: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F8204u;
    {
        const bool branch_taken_0x1f8204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8204) {
            ctx->pc = 0x1F81F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f81f0;
        }
    }
    ctx->pc = 0x1F820Cu;
label_1f820c:
    // 0x1f820c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1f820cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1f8210: 0x1040ffe3  beqz        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1F8210u;
    {
        const bool branch_taken_0x1f8210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8210u;
        // 0x1f8214: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8210) {
            ctx->pc = 0x1F81A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f81a0;
        }
    }
    ctx->pc = 0x1F8218u;
    // 0x1f8218: 0x26912bc0  addiu       $s1, $s4, 0x2BC0
    ctx->pc = 0x1f8218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 11200));
    // 0x1f821c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1f821cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8220: 0x26c71680  addiu       $a3, $s6, 0x1680
    ctx->pc = 0x1f8220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 5760));
    // 0x1f8224: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f8224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f8228: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f8228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f822c: 0x240500fe  addiu       $a1, $zero, 0xFE
    ctx->pc = 0x1f822cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x1f8230: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8234: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1f8234u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1f8238: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x1f8238u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f823c: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F823Cu;
    SET_GPR_U32(ctx, 31, 0x1F8244u);
    ctx->pc = 0x1F8240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F823Cu;
    // 0x1f8240: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F823Cu, 0x1F8244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8244u;
label_1f8244:
    // 0x1f8244: 0x8ea4d6bc  lw          $a0, -0x2944($s5)
    ctx->pc = 0x1f8244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956732)));
    // 0x1f8248: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F8248u;
    SET_GPR_U32(ctx, 31, 0x1F8250u);
    ctx->pc = 0x1F824Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8248u;
    // 0x1f824c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F8248u, 0x1F8250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8250u;
label_1f8250:
    // 0x1f8250: 0x6030004  bgezl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8250u;
    {
        const bool branch_taken_0x1f8250 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1f8250) {
            ctx->pc = 0x1F8254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8250u;
            // 0x1f8254: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8264u;
            goto label_1f8264;
        }
    }
    ctx->pc = 0x1F8258u;
    // 0x1f8258: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x1f8258u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
    // 0x1f825c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1F825Cu;
    {
        const bool branch_taken_0x1f825c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F825Cu;
        // 0x1f8260: 0x2602ff9c  addiu       $v0, $s0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f825c) {
            ctx->pc = 0x1F82ACu;
            goto label_1f82ac;
        }
    }
    ctx->pc = 0x1F8264u;
label_1f8264:
    // 0x1f8264: 0x2842020a  slti        $v0, $v0, 0x20A
    ctx->pc = 0x1f8264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)522) ? 1 : 0);
    // 0x1f8268: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F8268u;
    {
        const bool branch_taken_0x1f8268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8268u;
        // 0x1f826c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8268) {
            ctx->pc = 0x1F8284u;
            goto label_1f8284;
        }
    }
    ctx->pc = 0x1F8270u;
    // 0x1f8270: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F8270u;
    SET_GPR_U32(ctx, 31, 0x1F8278u);
    ctx->pc = 0x1F8274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8270u;
    // 0x1f8274: 0x24844870  addiu       $a0, $a0, 0x4870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F8270u, 0x1F8278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8278u;
label_1f8278:
    // 0x1f8278: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x1f8278u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
    // 0x1f827c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F827Cu;
    {
        const bool branch_taken_0x1f827c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F827Cu;
        // 0x1f8280: 0x2402ff88  addiu       $v0, $zero, -0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f827c) {
            ctx->pc = 0x1F82ACu;
            goto label_1f82ac;
        }
    }
    ctx->pc = 0x1F8284u;
label_1f8284:
    // 0x1f8284: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1f8284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1f8288: 0x2842020e  slti        $v0, $v0, 0x20E
    ctx->pc = 0x1f8288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)526) ? 1 : 0);
    // 0x1f828c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F828Cu;
    {
        const bool branch_taken_0x1f828c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F828Cu;
        // 0x1f8290: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f828c) {
            ctx->pc = 0x1F82A8u;
            goto label_1f82a8;
        }
    }
    ctx->pc = 0x1F8294u;
    // 0x1f8294: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F8294u;
    SET_GPR_U32(ctx, 31, 0x1F829Cu);
    ctx->pc = 0x1F8298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8294u;
    // 0x1f8298: 0x24844898  addiu       $a0, $a0, 0x4898 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F8294u, 0x1F829Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F829Cu;
label_1f829c:
    // 0x1f829c: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x1f829cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x1f82a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F82A0u;
    {
        const bool branch_taken_0x1f82a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F82A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F82A0u;
        // 0x1f82a4: 0x2402ff87  addiu       $v0, $zero, -0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967175));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f82a0) {
            ctx->pc = 0x1F82ACu;
            goto label_1f82ac;
        }
    }
    ctx->pc = 0x1F82A8u;
label_1f82a8:
    // 0x1f82a8: 0x8e822bc0  lw          $v0, 0x2BC0($s4)
    ctx->pc = 0x1f82a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11200)));
label_1f82ac:
    // 0x1f82ac: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1f82acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f82b0: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x1f82b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f82b4: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x1f82b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f82b8: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1f82b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f82bc: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x1f82bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f82c0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1f82c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f82c4: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x1f82c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f82c8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1f82c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f82cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F82CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F82D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F82CCu;
        // 0x1f82d0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F82CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F82D4u;
}
