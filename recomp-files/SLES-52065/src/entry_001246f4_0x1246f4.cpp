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

// Function: entry_001246f4
// Address: 0x1246f4 - 0x12475c
void entry_001246f4_0x1246f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001246f4_0x1246f4");
#endif

    switch (ctx->pc) {
        case 0x124758u: goto label_124758;
        default: break;
    }

    ctx->pc = 0x1246f4u;

    // 0x1246f4: 0x0  nop
    ctx->pc = 0x1246f4u;
    // NOP
    // 0x1246f8: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1246f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1246fc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1246FCu;
    {
        const bool branch_taken_0x1246fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1246FCu;
        // 0x124700: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1246fc) {
            ctx->pc = 0x12475Cu;
            return;
        }
    }
    ctx->pc = 0x124704u;
    // 0x124704: 0x32023fff  andi        $v0, $s0, 0x3FFF
    ctx->pc = 0x124704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16383);
    // 0x124708: 0xde460060  ld          $a2, 0x60($s2)
    ctx->pc = 0x124708u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x12470c: 0x2217c  dsll32      $a0, $v0, 5
    ctx->pc = 0x12470cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 5));
    // 0x124710: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x124710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124714: 0x3c02fff8  lui         $v0, 0xFFF8
    ctx->pc = 0x124714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65528 << 16));
    // 0x124718: 0x3443001f  ori         $v1, $v0, 0x1F
    ctx->pc = 0x124718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x12471c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x12471cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x124720: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x124720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x124724: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x124724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x124728: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x124728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12472c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12472cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x124730: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x124730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x124734: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x124734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x124738: 0xfe420060  sd          $v0, 0x60($s2)
    ctx->pc = 0x124738u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 2));
    // 0x12473c: 0xde420060  ld          $v0, 0x60($s2)
    ctx->pc = 0x12473cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x124740: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x124740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x124744: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x124744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x124748: 0x214be  dsrl32      $v0, $v0, 18
    ctx->pc = 0x124748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x12474c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x12474cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x124750: 0xc047e88  jal         func_11FA20
    ctx->pc = 0x124750u;
    SET_GPR_U32(ctx, 31, 0x124758u);
    ctx->pc = 0x124754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124750u;
    // 0x124754: 0x6303f  dsra32      $a2, $a2, 0 (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FA20u, 0x124750u, 0x124758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124758u;
label_124758:
    // 0x124758: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x124758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x12475cu;
}
