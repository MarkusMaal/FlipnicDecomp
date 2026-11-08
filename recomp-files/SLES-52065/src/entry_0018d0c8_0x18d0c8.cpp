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

// Function: entry_0018d0c8
// Address: 0x18d0c8 - 0x18d12c
void entry_0018d0c8_0x18d0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d0c8_0x18d0c8");
#endif

    switch (ctx->pc) {
        case 0x18d124u: goto label_18d124;
        default: break;
    }

    ctx->pc = 0x18d0c8u;

    // 0x18d0c8: 0xc6430490  lwc1        $f3, 0x490($s2)
    ctx->pc = 0x18d0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18d0cc: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x18d0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
    // 0x18d0d0: 0xc6410494  lwc1        $f1, 0x494($s2)
    ctx->pc = 0x18d0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d0d4: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x18d0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x18d0d8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18d0d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18d0dc: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x18d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x18d0e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18d0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18d0e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d0e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d0e8: 0x0  nop
    ctx->pc = 0x18d0e8u;
    // NOP
    // 0x18d0ec: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x18d0ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x18d0f0: 0xe6410490  swc1        $f1, 0x490($s2)
    ctx->pc = 0x18d0f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1168), bits); }
    // 0x18d0f4: 0xc643048c  lwc1        $f3, 0x48C($s2)
    ctx->pc = 0x18d0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18d0f8: 0xc6410494  lwc1        $f1, 0x494($s2)
    ctx->pc = 0x18d0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d0fc: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x18d0fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x18d100: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x18d100u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x18d104: 0xe641048c  swc1        $f1, 0x48C($s2)
    ctx->pc = 0x18d104u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1164), bits); }
    // 0x18d108: 0xc6410490  lwc1        $f1, 0x490($s2)
    ctx->pc = 0x18d108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d10c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18d10cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d110: 0x0  nop
    ctx->pc = 0x18d110u;
    // NOP
    // 0x18d114: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x18D114u;
    {
        const bool branch_taken_0x18d114 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D114u;
        // 0x18d118: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d114) {
            ctx->pc = 0x18D12Cu;
            return;
        }
    }
    ctx->pc = 0x18D11Cu;
    // 0x18d11c: 0xc063e14  jal         func_18F850
    ctx->pc = 0x18D11Cu;
    SET_GPR_U32(ctx, 31, 0x18D124u);
    ctx->pc = 0x18D120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D11Cu;
    // 0x18d120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x18D11Cu, 0x18D124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D124u;
label_18d124:
    // 0x18d124: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x18D124u;
    {
        const bool branch_taken_0x18d124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d124) {
            ctx->pc = 0x18D338u;
            return;
        }
    }
    ctx->pc = 0x18D12Cu;
}
