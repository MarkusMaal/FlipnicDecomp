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

// Function: FUN_0014be40
// Address: 0x14be40 - 0x14bfb0
void FUN_0014be40_0x14be40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014be40_0x14be40");
#endif

    switch (ctx->pc) {
        case 0x14be58u: goto label_14be58;
        case 0x14be7cu: goto label_14be7c;
        case 0x14be98u: goto label_14be98;
        case 0x14beb4u: goto label_14beb4;
        case 0x14bee0u: goto label_14bee0;
        case 0x14bef4u: goto label_14bef4;
        case 0x14bf00u: goto label_14bf00;
        case 0x14bf0cu: goto label_14bf0c;
        case 0x14bf14u: goto label_14bf14;
        case 0x14bf24u: goto label_14bf24;
        case 0x14bf38u: goto label_14bf38;
        case 0x14bf58u: goto label_14bf58;
        default: break;
    }

    ctx->pc = 0x14be40u;

    // 0x14be40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14be40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14be44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14be44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14be48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14be48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14be4c: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x14be4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x14be50: 0xc04d0f0  jal         func_1343C0
    ctx->pc = 0x14BE50u;
    SET_GPR_U32(ctx, 31, 0x14BE58u);
    ctx->pc = 0x14BE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BE50u;
    // 0x14be54: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1343C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1343C0u, 0x14BE50u, 0x14BE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE58u;
label_14be58:
    // 0x14be58: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x14be58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14be5c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x14be5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x14be60: 0x24639320  addiu       $v1, $v1, -0x6CE0
    ctx->pc = 0x14be60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939424));
    // 0x14be64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14be64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14be68: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x14be68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x14be6c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x14be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14be70: 0x245000b4  addiu       $s0, $v0, 0xB4
    ctx->pc = 0x14be70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x14be74: 0xc049dd8  jal         func_127760
    ctx->pc = 0x14BE74u;
    SET_GPR_U32(ctx, 31, 0x14BE7Cu);
    ctx->pc = 0x14BE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BE74u;
    // 0x14be78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127760u, 0x14BE74u, 0x14BE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE7Cu;
label_14be7c:
    // 0x14be7c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x14be7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x14be80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14be80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14be84: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x14be84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x14be88: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x14be88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14be8c: 0x245000c0  addiu       $s0, $v0, 0xC0
    ctx->pc = 0x14be8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x14be90: 0xc053028  jal         func_14C0A0
    ctx->pc = 0x14BE90u;
    SET_GPR_U32(ctx, 31, 0x14BE98u);
    ctx->pc = 0x14BE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BE90u;
    // 0x14be94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C0A0u, 0x14BE90u, 0x14BE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE98u;
label_14be98:
    // 0x14be98: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x14be98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x14be9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14be9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bea0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x14bea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x14bea4: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x14bea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14bea8: 0x245000cc  addiu       $s0, $v0, 0xCC
    ctx->pc = 0x14bea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
    // 0x14beac: 0xc053024  jal         func_14C090
    ctx->pc = 0x14BEACu;
    SET_GPR_U32(ctx, 31, 0x14BEB4u);
    ctx->pc = 0x14BEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BEACu;
    // 0x14beb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C090u, 0x14BEACu, 0x14BEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BEB4u;
label_14beb4:
    // 0x14beb4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x14beb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x14beb8: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x14beb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x14bebc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x14bebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x14bec0: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x14bec0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x14bec4: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x14bec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14bec8: 0x24a5c040  addiu       $a1, $a1, -0x3FC0
    ctx->pc = 0x14bec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950976));
    // 0x14becc: 0x24c6bfb0  addiu       $a2, $a2, -0x4050
    ctx->pc = 0x14beccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950832));
    // 0x14bed0: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x14bed0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x14bed4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x14bed4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14bed8: 0xc07a3d8  jal         func_1E8F60
    ctx->pc = 0x14BED8u;
    SET_GPR_U32(ctx, 31, 0x14BEE0u);
    ctx->pc = 0x14BEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BED8u;
    // 0x14bedc: 0x244400e0  addiu       $a0, $v0, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8F60u, 0x14BED8u, 0x14BEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BEE0u;
label_14bee0:
    // 0x14bee0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x14bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14bee4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14bee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bee8: 0x245000f8  addiu       $s0, $v0, 0xF8
    ctx->pc = 0x14bee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 248));
    // 0x14beec: 0xc049dd8  jal         func_127760
    ctx->pc = 0x14BEECu;
    SET_GPR_U32(ctx, 31, 0x14BEF4u);
    ctx->pc = 0x14BEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BEECu;
    // 0x14bef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127760u, 0x14BEECu, 0x14BEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BEF4u;
label_14bef4:
    // 0x14bef4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x14bef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x14bef8: 0xc04d988  jal         func_136620
    ctx->pc = 0x14BEF8u;
    SET_GPR_U32(ctx, 31, 0x14BF00u);
    ctx->pc = 0x14BEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BEF8u;
    // 0x14befc: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x14BEF8u, 0x14BF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF00u;
label_14bf00:
    // 0x14bf00: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x14bf00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14bf04: 0xc04c558  jal         func_131560
    ctx->pc = 0x14BF04u;
    SET_GPR_U32(ctx, 31, 0x14BF0Cu);
    ctx->pc = 0x14BF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BF04u;
    // 0x14bf08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131560u, 0x14BF04u, 0x14BF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF0Cu;
label_14bf0c:
    // 0x14bf0c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x14BF0Cu;
    SET_GPR_U32(ctx, 31, 0x14BF14u);
    ctx->pc = 0x14BF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BF0Cu;
    // 0x14bf10: 0x240403e0  addiu       $a0, $zero, 0x3E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x14BF0Cu, 0x14BF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF14u;
label_14bf14:
    // 0x14bf14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14BF14u;
    {
        const bool branch_taken_0x14bf14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BF14u;
        // 0x14bf18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bf14) {
            ctx->pc = 0x14BF24u;
            goto label_14bf24;
        }
    }
    ctx->pc = 0x14BF1Cu;
    // 0x14bf1c: 0xc0517c4  jal         func_145F10
    ctx->pc = 0x14BF1Cu;
    SET_GPR_U32(ctx, 31, 0x14BF24u);
    ctx->pc = 0x145F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F10u, 0x14BF1Cu, 0x14BF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF24u;
label_14bf24:
    // 0x14bf24: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x14bf24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14bf28: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x14bf28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
    // 0x14bf2c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x14bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14bf30: 0xc0519b4  jal         func_1466D0
    ctx->pc = 0x14BF30u;
    SET_GPR_U32(ctx, 31, 0x14BF38u);
    ctx->pc = 0x14BF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BF30u;
    // 0x14bf34: 0x8c4400b0  lw          $a0, 0xB0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1466D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1466D0u, 0x14BF30u, 0x14BF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF38u;
label_14bf38:
    // 0x14bf38: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x14bf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14bf3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14bf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14bf40: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x14bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x14bf44: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x14bf44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x14bf48: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x14bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14bf4c: 0xa0430054  sb          $v1, 0x54($v0)
    ctx->pc = 0x14bf4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 84), (uint8_t)GPR_U32(ctx, 3));
    // 0x14bf50: 0xc04d5e8  jal         func_1357A0
    ctx->pc = 0x14BF50u;
    SET_GPR_U32(ctx, 31, 0x14BF58u);
    ctx->pc = 0x14BF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BF50u;
    // 0x14bf54: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1357A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1357A0u, 0x14BF50u, 0x14BF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF58u;
label_14bf58:
    // 0x14bf58: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x14bf58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14bf5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14bf60: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x14bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x14bf64: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x14bf64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x14bf68: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x14bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14bf6c: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x14bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x14bf70: 0xac4002b4  sw          $zero, 0x2B4($v0)
    ctx->pc = 0x14bf70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 692), GPR_U32(ctx, 0));
    // 0x14bf74: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x14bf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14bf78: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x14bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x14bf7c: 0xac4002b8  sw          $zero, 0x2B8($v0)
    ctx->pc = 0x14bf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 696), GPR_U32(ctx, 0));
    // 0x14bf80: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x14bf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14bf84: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x14bf84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    // 0x14bf88: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x14bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14bf8c: 0xac4000d8  sw          $zero, 0xD8($v0)
    ctx->pc = 0x14bf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 0));
    // 0x14bf90: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x14bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14bf94: 0xac4300dc  sw          $v1, 0xDC($v0)
    ctx->pc = 0x14bf94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 3));
    // 0x14bf98: 0xaf8385d8  sw          $v1, -0x7A28($gp)
    ctx->pc = 0x14bf98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936024), GPR_U32(ctx, 3));
    // 0x14bf9c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x14bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14bfa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14bfa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14bfa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14bfa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14bfa8: 0x3e00008  jr          $ra
    ctx->pc = 0x14BFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BFA8u;
        // 0x14bfac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BFB0u;
}
