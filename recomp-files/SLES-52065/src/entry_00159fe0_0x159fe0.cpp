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

// Function: entry_00159fe0
// Address: 0x159fe0 - 0x15a04c
void entry_00159fe0_0x159fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159fe0_0x159fe0");
#endif

    switch (ctx->pc) {
        case 0x15a004u: goto label_15a004;
        default: break;
    }

    ctx->pc = 0x159fe0u;

    // 0x159fe0: 0xc6210224  lwc1        $f1, 0x224($s1)
    ctx->pc = 0x159fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159fe4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159fe8: 0x0  nop
    ctx->pc = 0x159fe8u;
    // NOP
    // 0x159fec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x159fecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159ff0: 0x0  nop
    ctx->pc = 0x159ff0u;
    // NOP
    // 0x159ff4: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x159FF4u;
    {
        const bool branch_taken_0x159ff4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x159FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159FF4u;
        // 0x159ff8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ff4) {
            ctx->pc = 0x15A068u;
            return;
        }
    }
    ctx->pc = 0x159FFCu;
    // 0x159ffc: 0xc056d24  jal         func_15B490
    ctx->pc = 0x159FFCu;
    SET_GPR_U32(ctx, 31, 0x15A004u);
    ctx->pc = 0x15A000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159FFCu;
    // 0x15a000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B490u, 0x159FFCu, 0x15A004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A004u;
label_15a004:
    // 0x15a004: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15a004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a008: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15a008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a00c: 0x16030015  bne         $s0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x15A00Cu;
    {
        const bool branch_taken_0x15a00c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x15a00c) {
            ctx->pc = 0x15A064u;
            return;
        }
    }
    ctx->pc = 0x15A014u;
    // 0x15a014: 0x86220232  lh          $v0, 0x232($s1)
    ctx->pc = 0x15a014u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 562)));
    // 0x15a018: 0xa622022e  sh          $v0, 0x22E($s1)
    ctx->pc = 0x15a018u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 558), (uint16_t)GPR_U32(ctx, 2));
    // 0x15a01c: 0x86220238  lh          $v0, 0x238($s1)
    ctx->pc = 0x15a01cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x15a020: 0xa622022a  sh          $v0, 0x22A($s1)
    ctx->pc = 0x15a020u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 554), (uint16_t)GPR_U32(ctx, 2));
    // 0x15a024: 0xa623022c  sh          $v1, 0x22C($s1)
    ctx->pc = 0x15a024u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 556), (uint16_t)GPR_U32(ctx, 3));
    // 0x15a028: 0x86230228  lh          $v1, 0x228($s1)
    ctx->pc = 0x15a028u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 552)));
    // 0x15a02c: 0x86220230  lh          $v0, 0x230($s1)
    ctx->pc = 0x15a02cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x15a030: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x15a030u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15a034: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A034u;
    {
        const bool branch_taken_0x15a034 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A034u;
        // 0x15a038: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a034) {
            ctx->pc = 0x15A04Cu;
            return;
        }
    }
    ctx->pc = 0x15A03Cu;
    // 0x15a03c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a040: 0xa6220228  sh          $v0, 0x228($s1)
    ctx->pc = 0x15a040u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 552), (uint16_t)GPR_U32(ctx, 2));
    // 0x15a044: 0xc042118  jal         func_108460
    ctx->pc = 0x15A044u;
    SET_GPR_U32(ctx, 31, 0x15A04Cu);
    ctx->pc = 0x15A048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A044u;
    // 0x15a048: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x15A044u, 0x15A04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A04Cu;
}
