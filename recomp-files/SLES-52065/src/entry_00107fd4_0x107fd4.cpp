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

// Function: entry_00107fd4
// Address: 0x107fd4 - 0x108040
void entry_00107fd4_0x107fd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107fd4_0x107fd4");
#endif

    switch (ctx->pc) {
        case 0x108000u: goto label_108000;
        default: break;
    }

    ctx->pc = 0x107fd4u;

    // 0x107fd4: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x107fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x107fd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x107fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107fdc: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x107fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x107fe0: 0x908821  addu        $s1, $a0, $s0
    ctx->pc = 0x107fe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x107fe4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x107fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x107fe8: 0x1483002a  bne         $a0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x107FE8u;
    {
        const bool branch_taken_0x107fe8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x107fe8) {
            ctx->pc = 0x108094u;
            return;
        }
    }
    ctx->pc = 0x107FF0u;
    // 0x107ff0: 0x12600028  beqz        $s3, . + 4 + (0x28 << 2)
    ctx->pc = 0x107FF0u;
    {
        const bool branch_taken_0x107ff0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x107ff0) {
            ctx->pc = 0x108094u;
            return;
        }
    }
    ctx->pc = 0x107FF8u;
    // 0x107ff8: 0xc062d50  jal         func_18B540
    ctx->pc = 0x107FF8u;
    SET_GPR_U32(ctx, 31, 0x108000u);
    ctx->pc = 0x107FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107FF8u;
    // 0x107ffc: 0x8e320008  lw          $s2, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x107FF8u, 0x108000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108000u;
label_108000:
    // 0x108000: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x108000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x108004: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x108004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x108008: 0x2443824  and         $a3, $s2, $a0
    ctx->pc = 0x108008u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x10800c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x10800cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x108010: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x108010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x108014: 0x72fc2  srl         $a1, $a3, 31
    ctx->pc = 0x108014u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x108018: 0x0  nop
    ctx->pc = 0x108018u;
    // NOP
    // 0x10801c: 0x2010  mfhi        $a0
    ctx->pc = 0x10801cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x108020: 0x3243ff00  andi        $v1, $s2, 0xFF00
    ctx->pc = 0x108020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65280);
    // 0x108024: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x108024u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
    // 0x108028: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x108028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x10802c: 0x423c3  sra         $a0, $a0, 15
    ctx->pc = 0x10802cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 15));
    // 0x108030: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x108030u;
    {
        const bool branch_taken_0x108030 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x108034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108030u;
        // 0x108034: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108030) {
            ctx->pc = 0x108040u;
            return;
        }
    }
    ctx->pc = 0x108038u;
    // 0x108038: 0x246300ff  addiu       $v1, $v1, 0xFF
    ctx->pc = 0x108038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
    // 0x10803c: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x10803cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
    ctx->pc = 0x108040u;
}
