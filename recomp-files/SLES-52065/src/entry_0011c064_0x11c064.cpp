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

// Function: entry_0011c064
// Address: 0x11c064 - 0x11c0d0
void entry_0011c064_0x11c064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c064_0x11c064");
#endif

    switch (ctx->pc) {
        case 0x11c09cu: goto label_11c09c;
        case 0x11c0c8u: goto label_11c0c8;
        default: break;
    }

    ctx->pc = 0x11c064u;

    // 0x11c064: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x11c064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x11c068: 0x12020019  beq         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x11C068u;
    {
        const bool branch_taken_0x11c068 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x11c068) {
            ctx->pc = 0x11C0D0u;
            return;
        }
    }
    ctx->pc = 0x11C070u;
    // 0x11c070: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x11c070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x11c074: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11c074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c078: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x11c078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x11c07c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11c07cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c080: 0x8e4400d0  lw          $a0, 0xD0($s2)
    ctx->pc = 0x11c080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x11c084: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11c084u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c088: 0x8e4500dc  lw          $a1, 0xDC($s2)
    ctx->pc = 0x11c088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x11c08c: 0x8e480058  lw          $t0, 0x58($s2)
    ctx->pc = 0x11c08cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x11c090: 0x8e49005c  lw          $t1, 0x5C($s2)
    ctx->pc = 0x11c090u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x11c094: 0xc047a78  jal         func_11E9E0
    ctx->pc = 0x11C094u;
    SET_GPR_U32(ctx, 31, 0x11C09Cu);
    ctx->pc = 0x11C098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C094u;
    // 0x11c098: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E9E0u, 0x11C094u, 0x11C09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C09Cu;
label_11c09c:
    // 0x11c09c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x11c09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x11c0a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11c0a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0a4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x11c0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x11c0a8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11c0a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0ac: 0x8e4400d4  lw          $a0, 0xD4($s2)
    ctx->pc = 0x11c0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x11c0b0: 0x240a1000  addiu       $t2, $zero, 0x1000
    ctx->pc = 0x11c0b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x11c0b4: 0x8e4500e0  lw          $a1, 0xE0($s2)
    ctx->pc = 0x11c0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x11c0b8: 0x8e480058  lw          $t0, 0x58($s2)
    ctx->pc = 0x11c0b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x11c0bc: 0x8e49005c  lw          $t1, 0x5C($s2)
    ctx->pc = 0x11c0bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x11c0c0: 0xc047a78  jal         func_11E9E0
    ctx->pc = 0x11C0C0u;
    SET_GPR_U32(ctx, 31, 0x11C0C8u);
    ctx->pc = 0x11C0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C0C0u;
    // 0x11c0c4: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E9E0u, 0x11C0C0u, 0x11C0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C0C8u;
label_11c0c8:
    // 0x11c0c8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x11C0C8u;
    {
        const bool branch_taken_0x11c0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C0C8u;
        // 0x11c0cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c0c8) {
            ctx->pc = 0x11C144u;
            return;
        }
    }
    ctx->pc = 0x11C0D0u;
}
