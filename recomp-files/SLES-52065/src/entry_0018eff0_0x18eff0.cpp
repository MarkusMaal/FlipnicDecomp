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

// Function: entry_0018eff0
// Address: 0x18eff0 - 0x18f060
void entry_0018eff0_0x18eff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018eff0_0x18eff0");
#endif

    switch (ctx->pc) {
        case 0x18f038u: goto label_18f038;
        case 0x18f058u: goto label_18f058;
        default: break;
    }

    ctx->pc = 0x18eff0u;

    // 0x18eff0: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x18eff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x18eff4: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x18eff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x18eff8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x18eff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18effc: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x18effcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x18f000: 0x27a7009c  addiu       $a3, $sp, 0x9C
    ctx->pc = 0x18f000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x18f004: 0xc68c01c0  lwc1        $f12, 0x1C0($s4)
    ctx->pc = 0x18f004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18f008: 0x26880290  addiu       $t0, $s4, 0x290
    ctx->pc = 0x18f008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 656));
    // 0x18f00c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x18f00cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f010: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x18f010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x18f014: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x18f014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x18f018: 0x848301f4  lh          $v1, 0x1F4($a0)
    ctx->pc = 0x18f018u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 500)));
    // 0x18f01c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x18f01cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x18f020: 0x8c8401f0  lw          $a0, 0x1F0($a0)
    ctx->pc = 0x18f020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 496)));
    // 0x18f024: 0x0  nop
    ctx->pc = 0x18f024u;
    // NOP
    // 0x18f028: 0x1010  mfhi        $v0
    ctx->pc = 0x18f028u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18f02c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x18f02cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x18f030: 0xc063b30  jal         func_18ECC0
    ctx->pc = 0x18F030u;
    SET_GPR_U32(ctx, 31, 0x18F038u);
    ctx->pc = 0x18F034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F030u;
    // 0x18f034: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ECC0u, 0x18F030u, 0x18F038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F038u;
label_18f038:
    // 0x18f038: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18F038u;
    {
        const bool branch_taken_0x18f038 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x18f038) {
            ctx->pc = 0x18F060u;
            return;
        }
    }
    ctx->pc = 0x18F040u;
    // 0x18f040: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x18f040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x18f044: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x18f044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x18f048: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18f048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18f04c: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x18f04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x18f050: 0xc0564b8  jal         func_1592E0
    ctx->pc = 0x18F050u;
    SET_GPR_U32(ctx, 31, 0x18F058u);
    ctx->pc = 0x18F054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F050u;
    // 0x18f054: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1592E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592E0u, 0x18F050u, 0x18F058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F058u;
label_18f058:
    // 0x18f058: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18F058u;
    {
        const bool branch_taken_0x18f058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f058) {
            ctx->pc = 0x18F070u;
            return;
        }
    }
    ctx->pc = 0x18F060u;
}
