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

// Function: entry_001b0858
// Address: 0x1b0858 - 0x1b08e8
void entry_001b0858_0x1b0858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0858_0x1b0858");
#endif

    switch (ctx->pc) {
        case 0x1b0874u: goto label_1b0874;
        default: break;
    }

    ctx->pc = 0x1b0858u;

    // 0x1b0858: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1b0858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1b085c: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x1b085cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1b0860: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1b0860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0864: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0868: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1b0868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1b086c: 0xc04b7dc  jal         func_12DF70
    ctx->pc = 0x1B086Cu;
    SET_GPR_U32(ctx, 31, 0x1B0874u);
    ctx->pc = 0x1B0870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B086Cu;
    // 0x1b0870: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF70u, 0x1B086Cu, 0x1B0874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0874u;
label_1b0874:
    // 0x1b0874: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x1b0874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1b0878: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x1b0878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1b087c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1b087cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b0880: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1b0880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b0884: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1b0884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0888: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1b0888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b088c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x1b088cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b0890: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1b0890u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b0894: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1b0894u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1b0898: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1b0898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1b089c: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x1b089cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b08a0: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x1b08a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b08a4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1b08a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b08a8: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x1b08a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b08ac: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x1b08acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1b08b0: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x1b08b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1b08b4: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x1b08b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1b08b8: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B08B8u;
    {
        const bool branch_taken_0x1b08b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B08BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B08B8u;
        // 0x1b08bc: 0xe440001c  swc1        $f0, 0x1C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b08b8) {
            ctx->pc = 0x1B090Cu;
            return;
        }
    }
    ctx->pc = 0x1B08C0u;
    // 0x1b08c0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b08c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b08c4: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b08c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b08c8: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b08c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b08cc: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b08ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b08d0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b08d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b08d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B08D4u;
    {
        const bool branch_taken_0x1b08d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b08d4) {
            ctx->pc = 0x1B08E8u;
            return;
        }
    }
    ctx->pc = 0x1B08DCu;
    // 0x1b08dc: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1b08dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1b08e0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b08e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b08e4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b08e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b08e8u;
}
