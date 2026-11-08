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

// Function: entry_001515a0
// Address: 0x1515a0 - 0x151644
void entry_001515a0_0x1515a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001515a0_0x1515a0");
#endif

    switch (ctx->pc) {
        case 0x15163cu: goto label_15163c;
        default: break;
    }

    ctx->pc = 0x1515a0u;

    // 0x1515a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1515a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1515a4: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1515a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1515a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1515a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1515ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1515acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1515b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1515b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1515b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1515b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1515b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1515b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1515bc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1515bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1515c0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1515c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1515c4: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x1515c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x1515c8: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1515c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1515cc: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x1515ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1515d0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1515d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1515d4: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x1515d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1515d8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1515d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1515dc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1515dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1515e0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1515e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1515e4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1515e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1515e8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1515e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1515ec: 0x838285e8  lb          $v0, -0x7A18($gp)
    ctx->pc = 0x1515ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936040)));
    // 0x1515f0: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1515F0u;
    {
        const bool branch_taken_0x1515f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1515F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1515F0u;
        // 0x1515f4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1515f0) {
            ctx->pc = 0x151644u;
            return;
        }
    }
    ctx->pc = 0x1515F8u;
    // 0x1515f8: 0x3c02302e  lui         $v0, 0x302E
    ctx->pc = 0x1515f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12334 << 16));
    // 0x1515fc: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x1515fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x151600: 0x34444000  ori         $a0, $v0, 0x4000
    ctx->pc = 0x151600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x151604: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x151604u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x151608: 0x24020512  addiu       $v0, $zero, 0x512
    ctx->pc = 0x151608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x15160c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x15160cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x151610: 0xfc227458  sd          $v0, 0x7458($at)
    ctx->pc = 0x151610u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x367458u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x367458u, _value); } while (0);
    // 0x151614: 0x3403800a  ori         $v1, $zero, 0x800A
    ctx->pc = 0x151614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32778);
    // 0x151618: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x151618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x15161c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x15161cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x151620: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x151620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x151624: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x151624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x151628: 0x24847450  addiu       $a0, $a0, 0x7450
    ctx->pc = 0x151628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29776));
    // 0x15162c: 0xfc227450  sd          $v0, 0x7450($at)
    ctx->pc = 0x15162cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x367450u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x367450u, _value); } while (0);
    // 0x151630: 0x24a54bb0  addiu       $a1, $a1, 0x4BB0
    ctx->pc = 0x151630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19376));
    // 0x151634: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x151634u;
    SET_GPR_U32(ctx, 31, 0x15163Cu);
    ctx->pc = 0x151638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151634u;
    // 0x151638: 0x24c67440  addiu       $a2, $a2, 0x7440 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x151634u, 0x15163Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15163Cu;
label_15163c:
    // 0x15163c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15163cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151640: 0xa38285e8  sb          $v0, -0x7A18($gp)
    ctx->pc = 0x151640u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936040), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x151644u;
}
