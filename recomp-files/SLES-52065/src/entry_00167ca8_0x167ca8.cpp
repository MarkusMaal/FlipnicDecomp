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

// Function: entry_00167ca8
// Address: 0x167ca8 - 0x167d3c
void entry_00167ca8_0x167ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167ca8_0x167ca8");
#endif

    switch (ctx->pc) {
        case 0x167cd8u: goto label_167cd8;
        case 0x167cf8u: goto label_167cf8;
        default: break;
    }

    ctx->pc = 0x167ca8u;

    // 0x167ca8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x167ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x167cac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167cb0: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x167cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x167cb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x167cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167cb8: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x167cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x167cbc: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x167cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x167cc0: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x167cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x167cc4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x167cc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167cc8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x167cc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167ccc: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x167cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x167cd0: 0xc0425d4  jal         func_109750
    ctx->pc = 0x167CD0u;
    SET_GPR_U32(ctx, 31, 0x167CD8u);
    ctx->pc = 0x167CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167CD0u;
    // 0x167cd4: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109750u, 0x167CD0u, 0x167CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167CD8u;
label_167cd8:
    // 0x167cd8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x167cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x167cdc: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x167cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x167ce0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x167ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x167ce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167ce8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167ce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167cec: 0xc46c004c  lwc1        $f12, 0x4C($v1)
    ctx->pc = 0x167cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x167cf0: 0xc056194  jal         func_158650
    ctx->pc = 0x167CF0u;
    SET_GPR_U32(ctx, 31, 0x167CF8u);
    ctx->pc = 0x167CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167CF0u;
    // 0x167cf4: 0x46140340  add.s       $f13, $f0, $f20 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x167CF0u, 0x167CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167CF8u;
label_167cf8:
    // 0x167cf8: 0xc6010294  lwc1        $f1, 0x294($s0)
    ctx->pc = 0x167cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167cfc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x167cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x167d00: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x167d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x167d04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167d04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167d08: 0x0  nop
    ctx->pc = 0x167d08u;
    // NOP
    // 0x167d0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x167d0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167d10: 0x0  nop
    ctx->pc = 0x167d10u;
    // NOP
    // 0x167d14: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x167D14u;
    {
        const bool branch_taken_0x167d14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x167D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D14u;
        // 0x167d18: 0x3c023dcc  lui         $v0, 0x3DCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167d14) {
            ctx->pc = 0x167D3Cu;
            return;
        }
    }
    ctx->pc = 0x167D1Cu;
    // 0x167d1c: 0xc60101c0  lwc1        $f1, 0x1C0($s0)
    ctx->pc = 0x167d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167d20: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x167d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x167d24: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x167d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x167d28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167d2c: 0x0  nop
    ctx->pc = 0x167d2cu;
    // NOP
    // 0x167d30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x167d30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x167d34: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x167d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x167d38: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x167d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    ctx->pc = 0x167d3cu;
}
