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

// Function: entry_001b0eb0
// Address: 0x1b0eb0 - 0x1b0f40
void entry_001b0eb0_0x1b0eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0eb0_0x1b0eb0");
#endif

    switch (ctx->pc) {
        case 0x1b0eccu: goto label_1b0ecc;
        default: break;
    }

    ctx->pc = 0x1b0eb0u;

    // 0x1b0eb0: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x1b0eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1b0eb4: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x1b0eb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1b0eb8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1b0eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0ebc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0ec0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1b0ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1b0ec4: 0xc04b7dc  jal         func_12DF70
    ctx->pc = 0x1B0EC4u;
    SET_GPR_U32(ctx, 31, 0x1B0ECCu);
    ctx->pc = 0x1B0EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0EC4u;
    // 0x1b0ec8: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF70u, 0x1B0EC4u, 0x1B0ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0ECCu;
label_1b0ecc:
    // 0x1b0ecc: 0x27a301d0  addiu       $v1, $sp, 0x1D0
    ctx->pc = 0x1b0eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1b0ed0: 0x27a201f0  addiu       $v0, $sp, 0x1F0
    ctx->pc = 0x1b0ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1b0ed4: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1b0ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b0ed8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1b0ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b0edc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1b0edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0ee0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1b0ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0ee4: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x1b0ee4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b0ee8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1b0ee8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b0eec: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1b0eecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1b0ef0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1b0ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1b0ef4: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x1b0ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b0ef8: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x1b0ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b0efc: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1b0efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0f00: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x1b0f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0f04: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x1b0f04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1b0f08: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x1b0f08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1b0f0c: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x1b0f0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1b0f10: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B0F10u;
    {
        const bool branch_taken_0x1b0f10 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F10u;
        // 0x1b0f14: 0xe440001c  swc1        $f0, 0x1C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f10) {
            ctx->pc = 0x1B0F64u;
            return;
        }
    }
    ctx->pc = 0x1B0F18u;
    // 0x1b0f18: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b0f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b0f1c: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b0f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b0f20: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b0f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b0f24: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b0f28: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0f28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b0f2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0F2Cu;
    {
        const bool branch_taken_0x1b0f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0f2c) {
            ctx->pc = 0x1B0F40u;
            return;
        }
    }
    ctx->pc = 0x1B0F34u;
    // 0x1b0f34: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1b0f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1b0f38: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b0f3c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0f3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b0f40u;
}
