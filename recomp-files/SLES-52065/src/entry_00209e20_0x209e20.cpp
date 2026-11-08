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

// Function: entry_00209e20
// Address: 0x209e20 - 0x209e80
void entry_00209e20_0x209e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209e20_0x209e20");
#endif

    switch (ctx->pc) {
        case 0x209e28u: goto label_209e28;
        default: break;
    }

    ctx->pc = 0x209e20u;

    // 0x209e20: 0xc0827a6  jal         func_209E98
    ctx->pc = 0x209E20u;
    SET_GPR_U32(ctx, 31, 0x209E28u);
    ctx->pc = 0x209E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209E98u, 0x209E20u, 0x209E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209E28u;
label_209e28:
    // 0x209e28: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x209e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x209e2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x209e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e30: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x209e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x209e34: 0x13302b  sltu        $a2, $zero, $s3
    ctx->pc = 0x209e34u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x209e38: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x209e38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x209e3c: 0x32240001  andi        $a0, $s1, 0x1
    ctx->pc = 0x209e3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x209e40: 0xa6060004  sh          $a2, 0x4($s0)
    ctx->pc = 0x209e40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x209e44: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x209e44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x209e48: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x209e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x209e4c: 0xa6110000  sh          $s1, 0x0($s0)
    ctx->pc = 0x209e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x209e50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x209e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x209e54: 0xa6120002  sh          $s2, 0x2($s0)
    ctx->pc = 0x209e54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x209e58: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x209e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x209e5c: 0x32660001  andi        $a2, $s3, 0x1
    ctx->pc = 0x209e5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x209e60: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x209e60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x209e64: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x209e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x209e68: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x209e68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x209e6c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x209e6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209e70: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x209e70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209e74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209e74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209e78: 0x807ac88  j           func_1EB220
    ctx->pc = 0x209E78u;
    ctx->pc = 0x209E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209E78u;
    // 0x209e7c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB220u;
    SetGsCrt_0x1eb220(rdram, ctx, runtime); return;
    ctx->pc = 0x209E80u;
}
