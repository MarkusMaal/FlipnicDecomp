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

// Function: entry_0021b0e0
// Address: 0x21b0e0 - 0x21b174
void entry_0021b0e0_0x21b0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b0e0_0x21b0e0");
#endif

    switch (ctx->pc) {
        case 0x21b130u: goto label_21b130;
        case 0x21b140u: goto label_21b140;
        default: break;
    }

    ctx->pc = 0x21b0e0u;

label_21b0e0:
    // 0x21b0e0: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x21b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_21b0e4:
    // 0x21b0e4: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x21b0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_21b0e8:
    // 0x21b0e8: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x21b0e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_21b0ec:
    // 0x21b0ec: 0x8ec54748  lw          $a1, 0x4748($s6)
    ctx->pc = 0x21b0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18248)));
label_21b0f0:
    // 0x21b0f0: 0x8c644778  lw          $a0, 0x4778($v1)
    ctx->pc = 0x21b0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18296)));
label_21b0f4:
    // 0x21b0f4: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x21b0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_21b0f8:
    // 0x21b0f8: 0x8c66476c  lw          $a2, 0x476C($v1)
    ctx->pc = 0x21b0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18284)));
label_21b0fc:
    // 0x21b0fc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x21b0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_21b100:
    // 0x21b100: 0xac440038  sw          $a0, 0x38($v0)
    ctx->pc = 0x21b100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 4));
label_21b104:
    // 0x21b104: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x21b104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_21b108:
    // 0x21b108: 0xac540034  sw          $s4, 0x34($v0)
    ctx->pc = 0x21b108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 20));
label_21b10c:
    // 0x21b10c: 0xac55000c  sw          $s5, 0xC($v0)
    ctx->pc = 0x21b10cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 21));
label_21b110:
    // 0x21b110: 0xac550030  sw          $s5, 0x30($v0)
    ctx->pc = 0x21b110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 21));
label_21b114:
    // 0x21b114: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x21b114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
label_21b118:
    // 0x21b118: 0xa440001a  sh          $zero, 0x1A($v0)
    ctx->pc = 0x21b118u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 26), (uint16_t)GPR_U32(ctx, 0));
label_21b11c:
    // 0x21b11c: 0xa4400018  sh          $zero, 0x18($v0)
    ctx->pc = 0x21b11cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 0));
label_21b120:
    // 0x21b120: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x21b120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_21b124:
    // 0x21b124: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x21b124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_21b128:
    // 0x21b128: 0xc0f809  jalr        $a2
label_21b12c:
    if (ctx->pc == 0x21B12Cu) {
        ctx->pc = 0x21B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B128u;
        // 0x21b12c: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B130u;
        goto label_21b130;
    }
    ctx->pc = 0x21B128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x21B130u);
        ctx->pc = 0x21B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B128u;
        // 0x21b12c: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B128u, 0x21B130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21B130u;
label_21b130:
    // 0x21b130: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x21b130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_21b134:
    // 0x21b134: 0x8c434768  lw          $v1, 0x4768($v0)
    ctx->pc = 0x21b134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18280)));
label_21b138:
    // 0x21b138: 0x60f809  jalr        $v1
label_21b13c:
    if (ctx->pc == 0x21B13Cu) {
        ctx->pc = 0x21B140u;
        goto label_21b140;
    }
    ctx->pc = 0x21B138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21B140u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B138u, 0x21B140u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21B140u;
label_21b140:
    // 0x21b140: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x21b140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_21b144:
    // 0x21b144: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x21b144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_21b148:
    // 0x21b148: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x21b148u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_21b14c:
    // 0x21b14c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x21b14cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_21b150:
    // 0x21b150: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x21b150u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_21b154:
    // 0x21b154: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x21b154u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_21b158:
    // 0x21b158: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x21b158u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_21b15c:
    // 0x21b15c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x21b15cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_21b160:
    // 0x21b160: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x21b160u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_21b164:
    // 0x21b164: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x21b164u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21b168:
    // 0x21b168: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21b168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21b16c:
    // 0x21b16c: 0x3e00008  jr          $ra
label_21b170:
    if (ctx->pc == 0x21B170u) {
        ctx->pc = 0x21B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B16Cu;
        // 0x21b170: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B174u;
        goto label_fallthrough_0x21b16c;
    }
    ctx->pc = 0x21B16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B16Cu;
        // 0x21b170: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B16Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21b16c:
    ctx->pc = 0x21B174u;
}
