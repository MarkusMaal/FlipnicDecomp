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

// Function: entry_0011c0d0
// Address: 0x11c0d0 - 0x11c144
void entry_0011c0d0_0x11c0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c0d0_0x11c0d0");
#endif

    switch (ctx->pc) {
        case 0x11c108u: goto label_11c108;
        case 0x11c140u: goto label_11c140;
        default: break;
    }

    ctx->pc = 0x11c0d0u;

    // 0x11c0d0: 0x8e480058  lw          $t0, 0x58($s2)
    ctx->pc = 0x11c0d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x11c0d4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x11c0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x11c0d8: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x11c0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x11c0dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11c0dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11c0e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11c0e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0e8: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x11c0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x11c0ec: 0x8e4400d0  lw          $a0, 0xD0($s2)
    ctx->pc = 0x11c0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x11c0f0: 0x2503003f  addiu       $v1, $t0, 0x3F
    ctx->pc = 0x11c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 63));
    // 0x11c0f4: 0x8e4500dc  lw          $a1, 0xDC($s2)
    ctx->pc = 0x11c0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x11c0f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x11c0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x11c0fc: 0x8e49005c  lw          $t1, 0x5C($s2)
    ctx->pc = 0x11c0fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x11c100: 0xc047a78  jal         func_11E9E0
    ctx->pc = 0x11C100u;
    SET_GPR_U32(ctx, 31, 0x11C108u);
    ctx->pc = 0x11C104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C100u;
    // 0x11c104: 0x25982  srl         $t3, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E9E0u, 0x11C100u, 0x11C108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C108u;
label_11c108:
    // 0x11c108: 0x8e480058  lw          $t0, 0x58($s2)
    ctx->pc = 0x11c108u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x11c10c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x11c10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x11c110: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x11c110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x11c114: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11c114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c118: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11c118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c11c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11c11cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c120: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x11c120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x11c124: 0x8e4400d4  lw          $a0, 0xD4($s2)
    ctx->pc = 0x11c124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x11c128: 0x2503003f  addiu       $v1, $t0, 0x3F
    ctx->pc = 0x11c128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 63));
    // 0x11c12c: 0x8e4500e0  lw          $a1, 0xE0($s2)
    ctx->pc = 0x11c12cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x11c130: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x11c130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x11c134: 0x8e49005c  lw          $t1, 0x5C($s2)
    ctx->pc = 0x11c134u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x11c138: 0xc047a78  jal         func_11E9E0
    ctx->pc = 0x11C138u;
    SET_GPR_U32(ctx, 31, 0x11C140u);
    ctx->pc = 0x11C13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C138u;
    // 0x11c13c: 0x25982  srl         $t3, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E9E0u, 0x11C138u, 0x11C140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C140u;
label_11c140:
    // 0x11c140: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11c140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11c144u;
}
