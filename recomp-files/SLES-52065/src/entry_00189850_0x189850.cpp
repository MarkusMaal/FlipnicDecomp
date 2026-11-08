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

// Function: entry_00189850
// Address: 0x189850 - 0x189988
void entry_00189850_0x189850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189850_0x189850");
#endif

    switch (ctx->pc) {
        case 0x1898f8u: goto label_1898f8;
        case 0x18990cu: goto label_18990c;
        default: break;
    }

    ctx->pc = 0x189850u;

    // 0x189850: 0x8e820050  lw          $v0, 0x50($s4)
    ctx->pc = 0x189850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x189854: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x189854u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x189858: 0x346b0004  ori         $t3, $v1, 0x4
    ctx->pc = 0x189858u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x18985c: 0x34038003  ori         $v1, $zero, 0x8003
    ctx->pc = 0x18985cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32771);
    // 0x189860: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x189860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x189864: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x189864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x189868: 0x24080047  addiu       $t0, $zero, 0x47
    ctx->pc = 0x189868u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x18986c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x18986cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x189870: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x189870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x189874: 0x346a0004  ori         $t2, $v1, 0x4
    ctx->pc = 0x189874u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x189878: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x189878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18987c: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x18987cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x189880: 0xffa500b0  sd          $a1, 0xB0($sp)
    ctx->pc = 0x189880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 5));
    // 0x189884: 0xffa400b8  sd          $a0, 0xB8($sp)
    ctx->pc = 0x189884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 4));
    // 0x189888: 0x34691001  ori         $t1, $v1, 0x1001
    ctx->pc = 0x189888u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4097);
    // 0x18988c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18988cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189890: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x189890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x189894: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x189894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x189898: 0xfc6b0000  sd          $t3, 0x0($v1)
    ctx->pc = 0x189898u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 11));
    // 0x18989c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18989cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1898a0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1898a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1898a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1898a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1898a8: 0xac6a000c  sw          $t2, 0xC($v1)
    ctx->pc = 0x1898a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 10));
    // 0x1898ac: 0x7baa00b0  lq          $t2, 0xB0($sp)
    ctx->pc = 0x1898acu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1898b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1898b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1898b4: 0x7c6a0010  sq          $t2, 0x10($v1)
    ctx->pc = 0x1898b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 10));
    // 0x1898b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1898b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1898bc: 0xfc690020  sd          $t1, 0x20($v1)
    ctx->pc = 0x1898bcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 9));
    // 0x1898c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1898c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1898c4: 0xfc680028  sd          $t0, 0x28($v1)
    ctx->pc = 0x1898c4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 8));
    // 0x1898c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1898c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1898cc: 0xfc670030  sd          $a3, 0x30($v1)
    ctx->pc = 0x1898ccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 7));
    // 0x1898d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1898d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1898d4: 0xfc660038  sd          $a2, 0x38($v1)
    ctx->pc = 0x1898d4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 6));
    // 0x1898d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1898d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1898dc: 0xfc650040  sd          $a1, 0x40($v1)
    ctx->pc = 0x1898dcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 5));
    // 0x1898e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1898e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1898e4: 0xfc640048  sd          $a0, 0x48($v1)
    ctx->pc = 0x1898e4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 72), GPR_U64(ctx, 4));
    // 0x1898e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1898e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1898ec: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x1898ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x1898f0: 0xc04b7b4  jal         func_12DED0
    ctx->pc = 0x1898F0u;
    SET_GPR_U32(ctx, 31, 0x1898F8u);
    ctx->pc = 0x1898F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1898F0u;
    // 0x1898f4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DED0u, 0x1898F0u, 0x1898F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1898F8u;
label_1898f8:
    // 0x1898f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1898f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1898fc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1898fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x189900: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x189900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189904: 0xc04b7dc  jal         func_12DF70
    ctx->pc = 0x189904u;
    SET_GPR_U32(ctx, 31, 0x18990Cu);
    ctx->pc = 0x189908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189904u;
    // 0x189908: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF70u, 0x189904u, 0x18990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18990Cu;
label_18990c:
    // 0x18990c: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x18990cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x189910: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x189910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x189914: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x189914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x189918: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x189918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18991c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x18991cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189920: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x189920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189924: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x189924u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x189928: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x189928u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18992c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x18992cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x189930: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x189930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x189934: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x189934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x189938: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x189938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18993c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x18993cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189940: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x189940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189944: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x189944u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x189948: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x189948u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x18994c: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x18994cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x189950: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x189950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x189954: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x189954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x189958: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x189958u;
    {
        const bool branch_taken_0x189958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189958u;
        // 0x18995c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189958) {
            ctx->pc = 0x1899A0u;
            return;
        }
    }
    ctx->pc = 0x189960u;
    // 0x189960: 0x3c02424f  lui         $v0, 0x424F
    ctx->pc = 0x189960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
    // 0x189964: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x189964u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x189968: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x189968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18996c: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x18996cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x189970: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189970u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x189974: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x189974u;
    {
        const bool branch_taken_0x189974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189974u;
        // 0x189978: 0x8e830058  lw          $v1, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189974) {
            ctx->pc = 0x189988u;
            return;
        }
    }
    ctx->pc = 0x18997Cu;
    // 0x18997c: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x18997cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x189980: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x189980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x189984: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x189988u;
}
