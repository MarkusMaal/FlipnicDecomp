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

// Function: FUN_001ed798
// Address: 0x1ed798 - 0x1eda18
void FUN_001ed798_0x1ed798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ed798_0x1ed798");
#endif

    switch (ctx->pc) {
        case 0x1ed7b8u: goto label_1ed7b8;
        case 0x1ed850u: goto label_1ed850;
        case 0x1ed880u: goto label_1ed880;
        case 0x1ed8ccu: goto label_1ed8cc;
        case 0x1ed8d4u: goto label_1ed8d4;
        case 0x1ed914u: goto label_1ed914;
        case 0x1ed928u: goto label_1ed928;
        case 0x1ed938u: goto label_1ed938;
        case 0x1ed944u: goto label_1ed944;
        case 0x1ed990u: goto label_1ed990;
        case 0x1ed998u: goto label_1ed998;
        case 0x1ed9acu: goto label_1ed9ac;
        case 0x1ed9bcu: goto label_1ed9bc;
        case 0x1ed9ccu: goto label_1ed9cc;
        default: break;
    }

    ctx->pc = 0x1ed798u;

    // 0x1ed798: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ed798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ed79c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ed79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1ed7a0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1ed7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1ed7a4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1ed7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1ed7a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ed7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ed7ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ed7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ed7b0: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1ED7B0u;
    SET_GPR_U32(ctx, 31, 0x1ED7B8u);
    ctx->pc = 0x1ED7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED7B0u;
    // 0x1ed7b4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1ED7B0u, 0x1ED7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED7B8u;
label_1ed7b8:
    // 0x1ed7b8: 0x3c0a0022  lui         $t2, 0x22
    ctx->pc = 0x1ed7b8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)34 << 16));
    // 0x1ed7bc: 0x8d42a3c8  lw          $v0, -0x5C38($t2)
    ctx->pc = 0x1ed7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21A3C8u));
    // 0x1ed7c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ED7C0u;
    {
        const bool branch_taken_0x1ed7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7C0u;
        // 0x1ed7c4: 0x3c130039  lui         $s3, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed7c0) {
            ctx->pc = 0x1ED7E8u;
            goto label_1ed7e8;
        }
    }
    ctx->pc = 0x1ED7C8u;
    // 0x1ed7c8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ed7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ed7cc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1ed7ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ed7d0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1ed7d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed7d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ed7d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed7d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ed7d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed7dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ed7dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed7e0: 0x807d0ea  j           func_1F43A8
    ctx->pc = 0x1ED7E0u;
    ctx->pc = 0x1ED7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED7E0u;
    // 0x1ed7e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    FUN_001f43a8_0x1f43a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1ED7E8u;
label_1ed7e8:
    // 0x1ed7e8: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1ed7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1ed7ec: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1ed7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1ed7f0: 0x24a5c780  addiu       $a1, $a1, -0x3880
    ctx->pc = 0x1ed7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952832));
    // 0x1ed7f4: 0x2666c700  addiu       $a2, $s3, -0x3900
    ctx->pc = 0x1ed7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952704));
    // 0x1ed7f8: 0x3c120039  lui         $s2, 0x39
    ctx->pc = 0x1ed7f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)57 << 16));
    // 0x1ed7fc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1ed7fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1ed800: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1ed800u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1ed804: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ed804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed808: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1ed808u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1ed80c: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1ed80cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1ed810: 0x2642c7d8  addiu       $v0, $s2, -0x3828
    ctx->pc = 0x1ed810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952920));
    // 0x1ed814: 0xad43a3c8  sw          $v1, -0x5C38($t2)
    ctx->pc = 0x1ed814u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294943688), GPR_U32(ctx, 3));
    // 0x1ed818: 0x2528c800  addiu       $t0, $t1, -0x3800
    ctx->pc = 0x1ed818u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 4294952960));
    // 0x1ed81c: 0xae46c7d8  sw          $a2, -0x3828($s2)
    ctx->pc = 0x1ed81cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x38C7D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38C7D8u, _value); } while (0);
    // 0x1ed820: 0x2484c900  addiu       $a0, $a0, -0x3700
    ctx->pc = 0x1ed820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953216));
    // 0x1ed824: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1ed824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1ed828: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x1ed828u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x38C7F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38C7F4u, _value); } while (0);
    // 0x1ed82c: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1ed82cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x38C7DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38C7DCu, _value); } while (0);
    // 0x1ed830: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x1ed830u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed834: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x1ed834u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x38C7E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38C7E8u, _value); } while (0);
    // 0x1ed838: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1ed838u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
    // 0x1ed83c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1ed83cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x38C7E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38C7E0u, _value); } while (0);
    // 0x1ed840: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x1ed840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1ed844: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x1ed844u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x38C7E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38C7E4u, _value); } while (0);
    // 0x1ed848: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1ed848u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x38C7ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38C7ECu, _value); } while (0);
    // 0x1ed84c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1ed84cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x38C7F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38C7F0u, _value); } while (0);
label_1ed850:
    // 0x1ed850: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1ed850u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1ed854: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1ed854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1ed858: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ed858u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ed85c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1ed85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1ed860: 0x0  nop
    ctx->pc = 0x1ed860u;
    // NOP
    // 0x1ed864: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1ED864u;
    {
        const bool branch_taken_0x1ed864 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1ed864) {
            ctx->pc = 0x1ED850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed850;
        }
    }
    ctx->pc = 0x1ED86Cu;
    // 0x1ed86c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ed86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1ed870: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x1ed870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1ed874: 0x2442c900  addiu       $v0, $v0, -0x3700
    ctx->pc = 0x1ed874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953216));
    // 0x1ed878: 0x2442007c  addiu       $v0, $v0, 0x7C
    ctx->pc = 0x1ed878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
    // 0x1ed87c: 0x0  nop
    ctx->pc = 0x1ed87cu;
    // NOP
label_1ed880:
    // 0x1ed880: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1ed880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1ed884: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1ed884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1ed888: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1ed888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1ed88c: 0x0  nop
    ctx->pc = 0x1ed88cu;
    // NOP
    // 0x1ed890: 0x0  nop
    ctx->pc = 0x1ed890u;
    // NOP
    // 0x1ed894: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1ED894u;
    {
        const bool branch_taken_0x1ed894 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1ed894) {
            ctx->pc = 0x1ED880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed880;
        }
    }
    ctx->pc = 0x1ED89Cu;
    // 0x1ed89c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1ed89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1ed8a0: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1ed8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1ed8a4: 0x2442d740  addiu       $v0, $v0, -0x28C0
    ctx->pc = 0x1ed8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956864));
    // 0x1ed8a8: 0x2524c800  addiu       $a0, $t1, -0x3800
    ctx->pc = 0x1ed8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294952960));
    // 0x1ed8ac: 0x2463d720  addiu       $v1, $v1, -0x28E0
    ctx->pc = 0x1ed8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956832));
    // 0x1ed8b0: 0x2651c7d8  addiu       $s1, $s2, -0x3828
    ctx->pc = 0x1ed8b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952920));
    // 0x1ed8b4: 0xad22c800  sw          $v0, -0x3800($t1)
    ctx->pc = 0x1ed8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294952960), GPR_U32(ctx, 2));
    // 0x1ed8b8: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x1ed8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1ed8bc: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1ed8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1ed8c0: 0xac91000c  sw          $s1, 0xC($a0)
    ctx->pc = 0x1ed8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 17));
    // 0x1ed8c4: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1ED8C4u;
    SET_GPR_U32(ctx, 31, 0x1ED8CCu);
    ctx->pc = 0x1ED8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED8C4u;
    // 0x1ed8c8: 0xac910004  sw          $s1, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1ED8C4u, 0x1ED8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED8CCu;
label_1ed8cc:
    // 0x1ed8cc: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x1ED8CCu;
    SET_GPR_U32(ctx, 31, 0x1ED8D4u);
    ctx->pc = 0x1ED8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED8CCu;
    // 0x1ed8d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x1ED8CCu, 0x1ED8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED8D4u;
label_1ed8d4:
    // 0x1ed8d4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ed8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1ed8d8: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x1ed8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x1ed8dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ed8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000E010u));
    // 0x1ed8e0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1ed8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1ed8e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED8E4u;
    {
        const bool branch_taken_0x1ed8e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED8E4u;
        // 0x1ed8e8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed8e4) {
            ctx->pc = 0x1ED8F8u;
            goto label_1ed8f8;
        }
    }
    ctx->pc = 0x1ED8ECu;
    // 0x1ed8ec: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1ed8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1ed8f0: 0xac30e010  sw          $s0, -0x1FF0($at)
    ctx->pc = 0x1ed8f0u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 16));
    // 0x1ed8f4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ed8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1ed8f8:
    // 0x1ed8f8: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x1ed8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x1ed8fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ed8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed900: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1ed900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1ed904: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED904u;
    {
        const bool branch_taken_0x1ed904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED904u;
        // 0x1ed908: 0x3c05001f  lui         $a1, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed904) {
            ctx->pc = 0x1ED918u;
            goto label_1ed918;
        }
    }
    ctx->pc = 0x1ED90Cu;
    // 0x1ed90c: 0xc07ae80  jal         func_1EBA00
    ctx->pc = 0x1ED90Cu;
    SET_GPR_U32(ctx, 31, 0x1ED914u);
    ctx->pc = 0x1EBA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBA00u, 0x1ED90Cu, 0x1ED914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED914u;
label_1ed914:
    // 0x1ed914: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x1ed914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
label_1ed918:
    // 0x1ed918: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1ed918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ed91c: 0x24a5dc90  addiu       $a1, $a1, -0x2370
    ctx->pc = 0x1ed91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958224));
    // 0x1ed920: 0xc07accc  jal         func_1EB330
    ctx->pc = 0x1ED920u;
    SET_GPR_U32(ctx, 31, 0x1ED928u);
    ctx->pc = 0x1ED924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED920u;
    // 0x1ed924: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB330u, 0x1ED920u, 0x1ED928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED928u;
label_1ed928:
    // 0x1ed928: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1ed928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1ed92c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1ed92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ed930: 0xc07b08e  jal         func_1EC238
    ctx->pc = 0x1ED930u;
    SET_GPR_U32(ctx, 31, 0x1ED938u);
    ctx->pc = 0x1ED934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED930u;
    // 0x1ed934: 0xac62c7d4  sw          $v0, -0x382C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952916), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC238u, 0x1ED930u, 0x1ED938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED938u;
label_1ed938:
    // 0x1ed938: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ed938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ed93c: 0xc07ae8c  jal         func_1EBA30
    ctx->pc = 0x1ED93Cu;
    SET_GPR_U32(ctx, 31, 0x1ED944u);
    ctx->pc = 0x1EBA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBA30u, 0x1ED93Cu, 0x1ED944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED944u;
label_1ed944:
    // 0x1ed944: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1ED944u;
    {
        const bool branch_taken_0x1ed944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED944u;
        // 0x1ed948: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed944) {
            ctx->pc = 0x1ED98Cu;
            goto label_1ed98c;
        }
    }
    ctx->pc = 0x1ED94Cu;
    // 0x1ed94c: 0x2685c7c0  addiu       $a1, $s4, -0x3840
    ctx->pc = 0x1ed94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952896));
    // 0x1ed950: 0x2662c700  addiu       $v0, $s3, -0x3900
    ctx->pc = 0x1ed950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952704));
    // 0x1ed954: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ed954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ed958: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ed958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ed95c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1ed95cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ed960: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1ed960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ed964: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1ed964u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed968: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ed968u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed96c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ed96cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed970: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ed970u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed974: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ed974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed978: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ed978u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed97c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ed97cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed980: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x1ed980u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x1ed984: 0x807b704  j           func_1EDC10
    ctx->pc = 0x1ED984u;
    ctx->pc = 0x1ED988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED984u;
    // 0x1ed988: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDC10u;
    FUN_001edc10_0x1edc10(rdram, ctx, runtime); return;
    ctx->pc = 0x1ED98Cu;
label_1ed98c:
    // 0x1ed98c: 0x3c100002  lui         $s0, 0x2
    ctx->pc = 0x1ed98cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)2 << 16));
label_1ed990:
    // 0x1ed990: 0xc07ae8c  jal         func_1EBA30
    ctx->pc = 0x1ED990u;
    SET_GPR_U32(ctx, 31, 0x1ED998u);
    ctx->pc = 0x1ED994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED990u;
    // 0x1ed994: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBA30u, 0x1ED990u, 0x1ED998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED998u;
label_1ed998:
    // 0x1ed998: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x1ed998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x1ed99c: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1ED99Cu;
    {
        const bool branch_taken_0x1ed99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED99Cu;
        // 0x1ed9a0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed99c) {
            ctx->pc = 0x1ED990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed990;
        }
    }
    ctx->pc = 0x1ED9A4u;
    // 0x1ed9a4: 0xc07ae8c  jal         func_1EBA30
    ctx->pc = 0x1ED9A4u;
    SET_GPR_U32(ctx, 31, 0x1ED9ACu);
    ctx->pc = 0x1ED9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED9A4u;
    // 0x1ed9a8: 0x2650c7d8  addiu       $s0, $s2, -0x3828 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBA30u, 0x1ED9A4u, 0x1ED9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED9ACu;
label_1ed9ac:
    // 0x1ed9ac: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1ed9acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1ed9b0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ed9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ed9b4: 0xc07ae88  jal         func_1EBA20
    ctx->pc = 0x1ED9B4u;
    SET_GPR_U32(ctx, 31, 0x1ED9BCu);
    ctx->pc = 0x1ED9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED9B4u;
    // 0x1ed9b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBA20u, 0x1ED9B4u, 0x1ED9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED9BCu;
label_1ed9bc:
    // 0x1ed9bc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ed9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ed9c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ed9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed9c4: 0xc07ae88  jal         func_1EBA20
    ctx->pc = 0x1ED9C4u;
    SET_GPR_U32(ctx, 31, 0x1ED9CCu);
    ctx->pc = 0x1ED9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED9C4u;
    // 0x1ed9c8: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBA20u, 0x1ED9C4u, 0x1ED9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED9CCu;
label_1ed9cc:
    // 0x1ed9cc: 0x2683c7c0  addiu       $v1, $s4, -0x3840
    ctx->pc = 0x1ed9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952896));
    // 0x1ed9d0: 0x2662c700  addiu       $v0, $s3, -0x3900
    ctx->pc = 0x1ed9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952704));
    // 0x1ed9d4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ed9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ed9d8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ed9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ed9dc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1ed9dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ed9e0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1ed9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed9e4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1ed9e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed9e8: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x1ed9e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x1ed9ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ed9ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed9f0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1ed9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ed9f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ed9f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed9f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ed9f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed9fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ed9fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eda00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1eda00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eda04: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x1eda04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x1eda08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1eda08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eda0c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1eda0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1eda10: 0x807b704  j           func_1EDC10
    ctx->pc = 0x1EDA10u;
    ctx->pc = 0x1EDA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDA10u;
    // 0x1eda14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDC10u;
    FUN_001edc10_0x1edc10(rdram, ctx, runtime); return;
    ctx->pc = 0x1EDA18u;
}
