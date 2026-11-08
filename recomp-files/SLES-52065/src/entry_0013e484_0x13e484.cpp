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

// Function: entry_0013e484
// Address: 0x13e484 - 0x13e4f0
void entry_0013e484_0x13e484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e484_0x13e484");
#endif

    switch (ctx->pc) {
        case 0x13e49cu: goto label_13e49c;
        default: break;
    }

    ctx->pc = 0x13e484u;

    // 0x13e484: 0x0  nop
    ctx->pc = 0x13e484u;
    // NOP
    // 0x13e488: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x13e488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e48c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x13e48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x13e490: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13e490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e494: 0xc04b7dc  jal         func_12DF70
    ctx->pc = 0x13E494u;
    SET_GPR_U32(ctx, 31, 0x13E49Cu);
    ctx->pc = 0x13E498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E494u;
    // 0x13e498: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF70u, 0x13E494u, 0x13E49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E49Cu;
label_13e49c:
    // 0x13e49c: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x13e49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x13e4a0: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x13e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13e4a4: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x13e4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13e4a8: 0x2e810020  sltiu       $at, $s4, 0x20
    ctx->pc = 0x13e4a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x13e4ac: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x13e4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13e4b0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x13e4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13e4b4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x13e4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e4b8: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x13e4b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13e4bc: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x13e4bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x13e4c0: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x13e4c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x13e4c4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x13e4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x13e4c8: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x13e4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13e4cc: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x13e4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13e4d0: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x13e4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13e4d4: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x13e4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e4d8: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x13e4d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x13e4dc: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x13e4dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x13e4e0: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x13e4e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x13e4e4: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x13E4E4u;
    {
        const bool branch_taken_0x13e4e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E4E4u;
        // 0x13e4e8: 0xe440001c  swc1        $f0, 0x1C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e4e4) {
            ctx->pc = 0x13E540u;
            return;
        }
    }
    ctx->pc = 0x13E4ECu;
    // 0x13e4ec: 0x148080  sll         $s0, $s4, 2
    ctx->pc = 0x13e4ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    ctx->pc = 0x13e4f0u;
}
