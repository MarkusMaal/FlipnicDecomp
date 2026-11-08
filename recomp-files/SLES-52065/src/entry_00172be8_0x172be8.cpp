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

// Function: entry_00172be8
// Address: 0x172be8 - 0x172c74
void entry_00172be8_0x172be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172be8_0x172be8");
#endif

    switch (ctx->pc) {
        case 0x172bfcu: goto label_172bfc;
        case 0x172c14u: goto label_172c14;
        case 0x172c3cu: goto label_172c3c;
        default: break;
    }

    ctx->pc = 0x172be8u;

label_172be8:
    // 0x172be8: 0x8e244020  lw          $a0, 0x4020($s1)
    ctx->pc = 0x172be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16416)));
label_172bec:
    // 0x172bec: 0x8c990010  lw          $t9, 0x10($a0)
    ctx->pc = 0x172becu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_172bf0:
    // 0x172bf0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x172bf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_172bf4:
    // 0x172bf4: 0x320f809  jalr        $t9
label_172bf8:
    if (ctx->pc == 0x172BF8u) {
        ctx->pc = 0x172BFCu;
        goto label_172bfc;
    }
    ctx->pc = 0x172BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172BFCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172BF4u, 0x172BFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172BFCu;
label_172bfc:
    // 0x172bfc: 0x8e244020  lw          $a0, 0x4020($s1)
    ctx->pc = 0x172bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16416)));
label_172c00:
    // 0x172c00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x172c00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_172c04:
    // 0x172c04: 0x8c990010  lw          $t9, 0x10($a0)
    ctx->pc = 0x172c04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_172c08:
    // 0x172c08: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x172c08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_172c0c:
    // 0x172c0c: 0x320f809  jalr        $t9
label_172c10:
    if (ctx->pc == 0x172C10u) {
        ctx->pc = 0x172C14u;
        goto label_172c14;
    }
    ctx->pc = 0x172C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172C14u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172C0Cu, 0x172C14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172C14u;
label_172c14:
    // 0x172c14: 0x92226032  lbu         $v0, 0x6032($s1)
    ctx->pc = 0x172c14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24626)));
label_172c18:
    // 0x172c18: 0x104000cf  beqz        $v0, . + 4 + (0xCF << 2)
label_172c1c:
    if (ctx->pc == 0x172C1Cu) {
        ctx->pc = 0x172C20u;
        goto label_172c20;
    }
    ctx->pc = 0x172C18u;
    {
        const bool branch_taken_0x172c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x172c18) {
            ctx->pc = 0x172F58u;
            return;
        }
    }
    ctx->pc = 0x172C20u;
label_172c20:
    // 0x172c20: 0xa2206032  sb          $zero, 0x6032($s1)
    ctx->pc = 0x172c20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24626), (uint8_t)GPR_U32(ctx, 0));
label_172c24:
    // 0x172c24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x172c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_172c28:
    // 0x172c28: 0x8e22601c  lw          $v0, 0x601C($s1)
    ctx->pc = 0x172c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24604)));
label_172c2c:
    // 0x172c2c: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x172c2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_172c30:
    // 0x172c30: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x172c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_172c34:
    // 0x172c34: 0xc05e658  jal         func_179960
label_172c38:
    if (ctx->pc == 0x172C38u) {
        ctx->pc = 0x172C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C34u;
        // 0x172c38: 0xa2226034  sb          $v0, 0x6034($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 24628), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172C3Cu;
        goto label_172c3c;
    }
    ctx->pc = 0x172C34u;
    SET_GPR_U32(ctx, 31, 0x172C3Cu);
    ctx->pc = 0x172C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172C34u;
    // 0x172c38: 0xa2226034  sb          $v0, 0x6034($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 24628), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179960u, 0x172C34u, 0x172C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172C3Cu;
label_172c3c:
    // 0x172c3c: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x172c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172c40:
    // 0x172c40: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x172c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_172c44:
    // 0x172c44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x172c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_172c48:
    // 0x172c48: 0x0  nop
    ctx->pc = 0x172c48u;
    // NOP
label_172c4c:
    // 0x172c4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x172c4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_172c50:
    // 0x172c50: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x172c50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_172c54:
    // 0x172c54: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172c54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_172c58:
    // 0x172c58: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x172c58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_172c5c:
    // 0x172c5c: 0x0  nop
    ctx->pc = 0x172c5cu;
    // NOP
label_172c60:
    // 0x172c60: 0xae226008  sw          $v0, 0x6008($s1)
    ctx->pc = 0x172c60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 2));
label_172c64:
    // 0x172c64: 0x8e226014  lw          $v0, 0x6014($s1)
    ctx->pc = 0x172c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24596)));
label_172c68:
    // 0x172c68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x172c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_172c6c:
    // 0x172c6c: 0x100000ba  b           . + 4 + (0xBA << 2)
label_172c70:
    if (ctx->pc == 0x172C70u) {
        ctx->pc = 0x172C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C6Cu;
        // 0x172c70: 0xae226014  sw          $v0, 0x6014($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172C74u;
        goto label_fallthrough_0x172c6c;
    }
    ctx->pc = 0x172C6Cu;
    {
        const bool branch_taken_0x172c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C6Cu;
        // 0x172c70: 0xae226014  sw          $v0, 0x6014($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172c6c) {
            ctx->pc = 0x172F58u;
            return;
        }
    }
label_fallthrough_0x172c6c:
    ctx->pc = 0x172C74u;
}
