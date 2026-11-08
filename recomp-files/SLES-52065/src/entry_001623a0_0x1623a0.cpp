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

// Function: entry_001623a0
// Address: 0x1623a0 - 0x162418
void entry_001623a0_0x1623a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001623a0_0x1623a0");
#endif

    switch (ctx->pc) {
        case 0x16240cu: goto label_16240c;
        default: break;
    }

    ctx->pc = 0x1623a0u;

    // 0x1623a0: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x1623a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x1623a4: 0x4800295  bltz        $a0, . + 4 + (0x295 << 2)
    ctx->pc = 0x1623A4u;
    {
        const bool branch_taken_0x1623a4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1623A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1623A4u;
        // 0x1623a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1623a4) {
            ctx->pc = 0x162DFCu;
            return;
        }
    }
    ctx->pc = 0x1623ACu;
    // 0x1623ac: 0xc62002e8  lwc1        $f0, 0x2E8($s1)
    ctx->pc = 0x1623acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1623b0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1623b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1623b4: 0x0  nop
    ctx->pc = 0x1623b4u;
    // NOP
    // 0x1623b8: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1623b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1623bc: 0x0  nop
    ctx->pc = 0x1623bcu;
    // NOP
    // 0x1623c0: 0x4501028d  bc1t        . + 4 + (0x28D << 2)
    ctx->pc = 0x1623C0u;
    {
        const bool branch_taken_0x1623c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1623C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1623C0u;
        // 0x1623c4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1623c0) {
            ctx->pc = 0x162DF8u;
            return;
        }
    }
    ctx->pc = 0x1623C8u;
    // 0x1623c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1623c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1623cc: 0x0  nop
    ctx->pc = 0x1623ccu;
    // NOP
    // 0x1623d0: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1623d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1623d4: 0x0  nop
    ctx->pc = 0x1623d4u;
    // NOP
    // 0x1623d8: 0x45000287  bc1f        . + 4 + (0x287 << 2)
    ctx->pc = 0x1623D8u;
    {
        const bool branch_taken_0x1623d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1623d8) {
            ctx->pc = 0x162DF8u;
            return;
        }
    }
    ctx->pc = 0x1623E0u;
    // 0x1623e0: 0x8e4301f0  lw          $v1, 0x1F0($s2)
    ctx->pc = 0x1623e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x1623e4: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1623e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1623e8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1623e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1623ec: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1623ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1623f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1623f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1623f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1623f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1623f8: 0x1262001d  beq         $s3, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1623F8u;
    {
        const bool branch_taken_0x1623f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1623FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1623F8u;
        // 0x1623fc: 0xae23033c  sw          $v1, 0x33C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 828), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1623f8) {
            ctx->pc = 0x162470u;
            return;
        }
    }
    ctx->pc = 0x162400u;
    // 0x162400: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x162400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x162404: 0xc055cb4  jal         func_1572D0
    ctx->pc = 0x162404u;
    SET_GPR_U32(ctx, 31, 0x16240Cu);
    ctx->pc = 0x162408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162404u;
    // 0x162408: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1572D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1572D0u, 0x162404u, 0x16240Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16240Cu;
label_16240c:
    // 0x16240c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16240cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162410: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x162410u;
    {
        const bool branch_taken_0x162410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162410u;
        // 0x162414: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162410) {
            ctx->pc = 0x162450u;
            return;
        }
    }
    ctx->pc = 0x162418u;
}
