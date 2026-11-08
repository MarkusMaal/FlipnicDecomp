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

// Function: entry_00166ea8
// Address: 0x166ea8 - 0x166f5c
void entry_00166ea8_0x166ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166ea8_0x166ea8");
#endif

    switch (ctx->pc) {
        case 0x166edcu: goto label_166edc;
        case 0x166f00u: goto label_166f00;
        case 0x166f14u: goto label_166f14;
        case 0x166f34u: goto label_166f34;
        case 0x166f4cu: goto label_166f4c;
        default: break;
    }

    ctx->pc = 0x166ea8u;

    // 0x166ea8: 0xe60002e8  swc1        $f0, 0x2E8($s0)
    ctx->pc = 0x166ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
    // 0x166eac: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x166eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x166eb0: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x166eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x166eb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166eb8: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x166eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x166ebc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x166ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166ec0: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x166ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x166ec4: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x166ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x166ec8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x166ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166ecc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x166eccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166ed0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x166ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x166ed4: 0xc0425d4  jal         func_109750
    ctx->pc = 0x166ED4u;
    SET_GPR_U32(ctx, 31, 0x166EDCu);
    ctx->pc = 0x166ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166ED4u;
    // 0x166ed8: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109750u, 0x166ED4u, 0x166EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166EDCu;
label_166edc:
    // 0x166edc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x166edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x166ee0: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x166ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x166ee4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x166ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x166ee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166eec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166ef0: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x166ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166ef4: 0xc46c004c  lwc1        $f12, 0x4C($v1)
    ctx->pc = 0x166ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x166ef8: 0xc056194  jal         func_158650
    ctx->pc = 0x166EF8u;
    SET_GPR_U32(ctx, 31, 0x166F00u);
    ctx->pc = 0x166EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166EF8u;
    // 0x166efc: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x166EF8u, 0x166F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F00u;
label_166f00:
    // 0x166f00: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x166f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x166f04: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x166f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x166f08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x166f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x166f0c: 0xc055dac  jal         func_1576B0
    ctx->pc = 0x166F0Cu;
    SET_GPR_U32(ctx, 31, 0x166F14u);
    ctx->pc = 0x166F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F0Cu;
    // 0x166f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1576B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1576B0u, 0x166F0Cu, 0x166F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F14u;
label_166f14:
    // 0x166f14: 0x822201d1  lb          $v0, 0x1D1($s1)
    ctx->pc = 0x166f14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 465)));
    // 0x166f18: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x166F18u;
    {
        const bool branch_taken_0x166f18 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x166F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F18u;
        // 0x166f1c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f18) {
            ctx->pc = 0x166F60u;
            return;
        }
    }
    ctx->pc = 0x166F20u;
    // 0x166f20: 0x822201d0  lb          $v0, 0x1D0($s1)
    ctx->pc = 0x166f20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 464)));
    // 0x166f24: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x166F24u;
    {
        const bool branch_taken_0x166f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F24u;
        // 0x166f28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f24) {
            ctx->pc = 0x166F5Cu;
            return;
        }
    }
    ctx->pc = 0x166F2Cu;
    // 0x166f2c: 0xc042118  jal         func_108460
    ctx->pc = 0x166F2Cu;
    SET_GPR_U32(ctx, 31, 0x166F34u);
    ctx->pc = 0x166F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F2Cu;
    // 0x166f30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x166F2Cu, 0x166F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F34u;
label_166f34:
    // 0x166f34: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x166f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x166f38: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x166f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x166f3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x166f3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x166f40: 0x8065002b  lb          $a1, 0x2B($v1)
    ctx->pc = 0x166f40u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 43)));
    // 0x166f44: 0xc0425a4  jal         func_109690
    ctx->pc = 0x166F44u;
    SET_GPR_U32(ctx, 31, 0x166F4Cu);
    ctx->pc = 0x166F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F44u;
    // 0x166f48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x166F44u, 0x166F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F4Cu;
label_166f4c:
    // 0x166f4c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x166f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x166f50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166f54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x166F54u;
    {
        const bool branch_taken_0x166f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F54u;
        // 0x166f58: 0xa22301d0  sb          $v1, 0x1D0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 464), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f54) {
            ctx->pc = 0x166F60u;
            return;
        }
    }
    ctx->pc = 0x166F5Cu;
}
