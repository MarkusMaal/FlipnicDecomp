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

// Function: entry_001d04d0
// Address: 0x1d04d0 - 0x1d0574
void entry_001d04d0_0x1d04d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d04d0_0x1d04d0");
#endif

    switch (ctx->pc) {
        case 0x1d04d8u: goto label_1d04d8;
        case 0x1d04ecu: goto label_1d04ec;
        default: break;
    }

    ctx->pc = 0x1d04d0u;

    // 0x1d04d0: 0xc04b7b4  jal         func_12DED0
    ctx->pc = 0x1D04D0u;
    SET_GPR_U32(ctx, 31, 0x1D04D8u);
    ctx->pc = 0x12DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DED0u, 0x1D04D0u, 0x1D04D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D04D8u;
label_1d04d8:
    // 0x1d04d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d04d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d04dc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1d04dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d04e0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d04e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d04e4: 0xc04b7dc  jal         func_12DF70
    ctx->pc = 0x1D04E4u;
    SET_GPR_U32(ctx, 31, 0x1D04ECu);
    ctx->pc = 0x1D04E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D04E4u;
    // 0x1d04e8: 0x24070041  addiu       $a3, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF70u, 0x1D04E4u, 0x1D04ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D04ECu;
label_1d04ec:
    // 0x1d04ec: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1d04ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d04f0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1d04f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d04f4: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1d04f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d04f8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1d04f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d04fc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1d04fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0500: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1d0500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0504: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x1d0504u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1d0508: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1d0508u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1d050c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1d050cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1d0510: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1d0510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1d0514: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x1d0514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d0518: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x1d0518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d051c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1d051cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0520: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x1d0520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0524: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x1d0524u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1d0528: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x1d0528u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1d052c: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x1d052cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1d0530: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x1d0530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x1d0534: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0538: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1d0538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d053c: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x1d053cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
    // 0x1d0540: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1d0540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d0544: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x1d0544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x1d0548: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1d0548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d054c: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x1d054cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
    // 0x1d0550: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1d0550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d0554: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x1d0554u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
    // 0x1d0558: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1d0558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d055c: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x1d055cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x1d0560: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1d0560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d0564: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0568: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d056c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D056Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D056Cu;
        // 0x1d0570: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D056Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0574u;
}
