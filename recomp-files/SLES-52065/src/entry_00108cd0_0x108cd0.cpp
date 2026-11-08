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

// Function: entry_00108cd0
// Address: 0x108cd0 - 0x108d58
void entry_00108cd0_0x108cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108cd0_0x108cd0");
#endif

    switch (ctx->pc) {
        case 0x108d18u: goto label_108d18;
        case 0x108d20u: goto label_108d20;
        case 0x108d40u: goto label_108d40;
        default: break;
    }

    ctx->pc = 0x108cd0u;

    // 0x108cd0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x108cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x108cd4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x108cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x108cd8: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x108cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x108cdc: 0x78460060  lq          $a2, 0x60($v0)
    ctx->pc = 0x108cdcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x108ce0: 0x7e060000  sq          $a2, 0x0($s0)
    ctx->pc = 0x108ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 6));
    // 0x108ce4: 0x3c024086  lui         $v0, 0x4086
    ctx->pc = 0x108ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16518 << 16));
    // 0x108ce8: 0xc60201c0  lwc1        $f2, 0x1C0($s0)
    ctx->pc = 0x108ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x108cec: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x108cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x108cf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x108cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108cf4: 0x26642c00  addiu       $a0, $s3, 0x2C00
    ctx->pc = 0x108cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 11264));
    // 0x108cf8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x108cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x108cfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x108cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x108d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d04: 0x260702d0  addiu       $a3, $s0, 0x2D0
    ctx->pc = 0x108d04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
    // 0x108d08: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x108d08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x108d0c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x108d0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x108d10: 0xc058138  jal         func_1604E0
    ctx->pc = 0x108D10u;
    SET_GPR_U32(ctx, 31, 0x108D18u);
    ctx->pc = 0x108D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D10u;
    // 0x108d14: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1604E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1604E0u, 0x108D10u, 0x108D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D18u;
label_108d18:
    // 0x108d18: 0xc055d4c  jal         func_157530
    ctx->pc = 0x108D18u;
    SET_GPR_U32(ctx, 31, 0x108D20u);
    ctx->pc = 0x108D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D18u;
    // 0x108d1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157530u, 0x108D18u, 0x108D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D20u;
label_108d20:
    // 0x108d20: 0x8e622c1c  lw          $v0, 0x2C1C($s3)
    ctx->pc = 0x108d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11292)));
    // 0x108d24: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x108d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x108d28: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x108d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x108d2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d30: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x108d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x108d34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x108d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108d38: 0xc055dec  jal         func_1577B0
    ctx->pc = 0x108D38u;
    SET_GPR_U32(ctx, 31, 0x108D40u);
    ctx->pc = 0x108D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D38u;
    // 0x108d3c: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1577B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1577B0u, 0x108D38u, 0x108D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D40u;
label_108d40:
    // 0x108d40: 0x6410005  bgez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x108D40u;
    {
        const bool branch_taken_0x108d40 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x108d40) {
            ctx->pc = 0x108D58u;
            return;
        }
    }
    ctx->pc = 0x108D48u;
    // 0x108d48: 0x860301ec  lh          $v1, 0x1EC($s0)
    ctx->pc = 0x108d48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x108d4c: 0x4600002  bltz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x108D4Cu;
    {
        const bool branch_taken_0x108d4c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x108d4c) {
            ctx->pc = 0x108D58u;
            return;
        }
    }
    ctx->pc = 0x108D54u;
    // 0x108d54: 0xa60301ee  sh          $v1, 0x1EE($s0)
    ctx->pc = 0x108d54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 494), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x108d58u;
}
