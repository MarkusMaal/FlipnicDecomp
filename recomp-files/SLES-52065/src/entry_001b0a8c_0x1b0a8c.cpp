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

// Function: entry_001b0a8c
// Address: 0x1b0a8c - 0x1b0b1c
void entry_001b0a8c_0x1b0a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0a8c_0x1b0a8c");
#endif

    switch (ctx->pc) {
        case 0x1b0aa8u: goto label_1b0aa8;
        default: break;
    }

    ctx->pc = 0x1b0a8cu;

    // 0x1b0a8c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1b0a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1b0a90: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x1b0a90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1b0a94: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1b0a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0a98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0a98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0a9c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1b0a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1b0aa0: 0xc04b7dc  jal         func_12DF70
    ctx->pc = 0x1B0AA0u;
    SET_GPR_U32(ctx, 31, 0x1B0AA8u);
    ctx->pc = 0x1B0AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0AA0u;
    // 0x1b0aa4: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF70u, 0x1B0AA0u, 0x1B0AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0AA8u;
label_1b0aa8:
    // 0x1b0aa8: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x1b0aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1b0aac: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x1b0aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1b0ab0: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1b0ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b0ab4: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1b0ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b0ab8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1b0ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0abc: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1b0abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0ac0: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x1b0ac0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b0ac4: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1b0ac4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b0ac8: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1b0ac8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1b0acc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1b0accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1b0ad0: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x1b0ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b0ad4: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x1b0ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b0ad8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1b0ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0adc: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x1b0adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0ae0: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x1b0ae0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1b0ae4: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x1b0ae4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1b0ae8: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x1b0ae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1b0aec: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B0AECu;
    {
        const bool branch_taken_0x1b0aec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0AECu;
        // 0x1b0af0: 0xe440001c  swc1        $f0, 0x1C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0aec) {
            ctx->pc = 0x1B0B40u;
            return;
        }
    }
    ctx->pc = 0x1B0AF4u;
    // 0x1b0af4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b0af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b0af8: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b0af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b0afc: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b0afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b0b00: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b0b04: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0b04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b0b08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0B08u;
    {
        const bool branch_taken_0x1b0b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0b08) {
            ctx->pc = 0x1B0B1Cu;
            return;
        }
    }
    ctx->pc = 0x1B0B10u;
    // 0x1b0b10: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1b0b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1b0b14: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b0b18: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0b18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b0b1cu;
}
