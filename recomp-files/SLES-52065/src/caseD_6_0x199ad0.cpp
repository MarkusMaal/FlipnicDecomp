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

// Function: caseD_6
// Address: 0x199ad0 - 0x199b30
void caseD_6_0x199ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x199ad0");
#endif

    switch (ctx->pc) {
        case 0x199ad0u: goto label_199ad0;
        case 0x199ad4u: goto label_199ad4;
        case 0x199ad8u: goto label_199ad8;
        case 0x199adcu: goto label_199adc;
        case 0x199ae0u: goto label_199ae0;
        case 0x199ae4u: goto label_199ae4;
        case 0x199ae8u: goto label_199ae8;
        case 0x199aecu: goto label_199aec;
        case 0x199af0u: goto label_199af0;
        case 0x199af4u: goto label_199af4;
        case 0x199af8u: goto label_199af8;
        case 0x199afcu: goto label_199afc;
        case 0x199b00u: goto label_199b00;
        case 0x199b04u: goto label_199b04;
        case 0x199b08u: goto label_199b08;
        case 0x199b0cu: goto label_199b0c;
        case 0x199b10u: goto label_199b10;
        case 0x199b14u: goto label_199b14;
        case 0x199b18u: goto label_199b18;
        case 0x199b1cu: goto label_199b1c;
        case 0x199b20u: goto label_199b20;
        case 0x199b24u: goto label_199b24;
        case 0x199b28u: goto label_199b28;
        case 0x199b2cu: goto label_199b2c;
        default: break;
    }

    ctx->pc = 0x199ad0u;

label_199ad0:
    // 0x199ad0: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x199ad0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_199ad4:
    // 0x199ad4: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x199ad4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_199ad8:
    // 0x199ad8: 0x320f809  jalr        $t9
label_199adc:
    if (ctx->pc == 0x199ADCu) {
        ctx->pc = 0x199ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AD8u;
        // 0x199adc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199AE0u;
        goto label_199ae0;
    }
    ctx->pc = 0x199AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x199AE0u);
        ctx->pc = 0x199ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AD8u;
        // 0x199adc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199AD8u, 0x199AE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199AE0u;
label_199ae0:
    // 0x199ae0: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x199ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_199ae4:
    // 0x199ae4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x199ae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_199ae8:
    // 0x199ae8: 0x0  nop
    ctx->pc = 0x199ae8u;
    // NOP
label_199aec:
    // 0x199aec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x199aecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_199af0:
    // 0x199af0: 0x0  nop
    ctx->pc = 0x199af0u;
    // NOP
label_199af4:
    // 0x199af4: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
label_199af8:
    if (ctx->pc == 0x199AF8u) {
        ctx->pc = 0x199AFCu;
        goto label_199afc;
    }
    ctx->pc = 0x199AF4u;
    {
        const bool branch_taken_0x199af4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x199af4) {
            ctx->pc = 0x199BA8u;
            return;
        }
    }
    ctx->pc = 0x199AFCu;
label_199afc:
    // 0x199afc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x199afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_199b00:
    // 0x199b00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x199b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_199b04:
    // 0x199b04: 0xc064c4c  jal         func_193130
label_199b08:
    if (ctx->pc == 0x199B08u) {
        ctx->pc = 0x199B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B04u;
        // 0x199b08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B0Cu;
        goto label_199b0c;
    }
    ctx->pc = 0x199B04u;
    SET_GPR_U32(ctx, 31, 0x199B0Cu);
    ctx->pc = 0x199B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199B04u;
    // 0x199b08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193130u, 0x199B04u, 0x199B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199B0Cu;
label_199b0c:
    // 0x199b0c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x199b0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_199b10:
    // 0x199b10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x199b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_199b14:
    // 0x199b14: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x199b14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_199b18:
    // 0x199b18: 0x320f809  jalr        $t9
label_199b1c:
    if (ctx->pc == 0x199B1Cu) {
        ctx->pc = 0x199B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B18u;
        // 0x199b1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B20u;
        goto label_199b20;
    }
    ctx->pc = 0x199B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x199B20u);
        ctx->pc = 0x199B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B18u;
        // 0x199b1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199B18u, 0x199B20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199B20u;
label_199b20:
    // 0x199b20: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x199b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_199b24:
    // 0x199b24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_199b28:
    // 0x199b28: 0x1000001f  b           . + 4 + (0x1F << 2)
label_199b2c:
    if (ctx->pc == 0x199B2Cu) {
        ctx->pc = 0x199B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B28u;
        // 0x199b2c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B30u;
        goto label_fallthrough_0x199b28;
    }
    ctx->pc = 0x199B28u;
    {
        const bool branch_taken_0x199b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B28u;
        // 0x199b2c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b28) {
            ctx->pc = 0x199BA8u;
            return;
        }
    }
label_fallthrough_0x199b28:
    ctx->pc = 0x199B30u;
}
