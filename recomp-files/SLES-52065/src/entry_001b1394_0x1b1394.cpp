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

// Function: entry_001b1394
// Address: 0x1b1394 - 0x1b141c
void entry_001b1394_0x1b1394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1394_0x1b1394");
#endif

    switch (ctx->pc) {
        case 0x1b13b0u: goto label_1b13b0;
        case 0x1b140cu: goto label_1b140c;
        default: break;
    }

    ctx->pc = 0x1b1394u;

    // 0x1b1394: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1b1394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b1398: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x1b1398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1b139c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1b139cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b13a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b13a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b13a4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1b13a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1b13a8: 0xc04b7dc  jal         func_12DF70
    ctx->pc = 0x1B13A8u;
    SET_GPR_U32(ctx, 31, 0x1B13B0u);
    ctx->pc = 0x1B13ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B13A8u;
    // 0x1b13ac: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF70u, 0x1B13A8u, 0x1B13B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B13B0u;
label_1b13b0:
    // 0x1b13b0: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x1b13b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b13b4: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x1b13b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b13b8: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1b13b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b13bc: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1b13bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b13c0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1b13c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b13c4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1b13c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b13c8: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x1b13c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b13cc: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1b13ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b13d0: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1b13d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1b13d4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1b13d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1b13d8: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x1b13d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b13dc: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x1b13dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b13e0: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1b13e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b13e4: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x1b13e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b13e8: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x1b13e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1b13ec: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x1b13ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1b13f0: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x1b13f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1b13f4: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x1b13f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x1b13f8: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x1b13f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1b13fc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B13FCu;
    {
        const bool branch_taken_0x1b13fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b13fc) {
            ctx->pc = 0x1B141Cu;
            return;
        }
    }
    ctx->pc = 0x1B1404u;
    // 0x1b1404: 0xc06c558  jal         func_1B1560
    ctx->pc = 0x1B1404u;
    SET_GPR_U32(ctx, 31, 0x1B140Cu);
    ctx->pc = 0x1B1408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1404u;
    // 0x1b1408: 0x8ec50000  lw          $a1, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1560u, 0x1B1404u, 0x1B140Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B140Cu;
label_1b140c:
    // 0x1b140c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B140Cu;
    {
        const bool branch_taken_0x1b140c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b140c) {
            ctx->pc = 0x1B141Cu;
            return;
        }
    }
    ctx->pc = 0x1B1414u;
    // 0x1b1414: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1414u;
    {
        const bool branch_taken_0x1b1414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1414u;
        // 0x1b1418: 0x8fa20128  lw          $v0, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1414) {
            ctx->pc = 0x1B1428u;
            return;
        }
    }
    ctx->pc = 0x1B141Cu;
}
